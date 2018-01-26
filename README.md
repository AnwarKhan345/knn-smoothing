## K-nearest neighbor smoothing for high-throughput single-cell RNA-Seq data

This repository contains reference Python, R, and Matlab implementations of the k-nearest neighbor smoothing algorithm ([Wagner et al., 2017](https://www.biorxiv.org/content/early/2018/01/24/217737)) for UMI-filtered single-cell RNA-Seq data.

## Running kNN-smoothing from the command-line

1. Install dependencies

   Make sure you have Python 3 and the Python packages `pandas`,  `scikit-learn` and `click` installed. The easiest way to install Python 3 as well as these packages is to download and install [Anaconda](https://github.com/yanailab/CEL-Seq-pipeline/blob/133912cd4ceb20af0c67627ab883dfce8b9668df/sample_sheet_example.txt) (select the "Python 3.6 version").

2. Download the GitHub repository

   [Download](https://github.com/yanailab/knn-smoothing/archive/master.zip) this GitHub repository, and extract the contents into a folder.

3. Test running the script

   To run the script, change into the folder where you extracted the files, and run (on Linux/Mac):
    
   ``` bash
   python3 knn_smooth.py --help
   ```

   You should see the following output:

     Usage: knn_smooth.py [OPTIONS]

     Options:
     --k INTEGER    Number of K.
     --fpath TEXT   Input UMI-count matrix.
     --saveto TEXT  Output smoothed UMI-count matrix.
     --sep TEXT     File sep when reading fpath.
     --help         Show this message and exit.

4. Make sure your expression matrix file is formatted correctly

   By default, the script expects your expression matrix to be stored as a tab-delimited plain-text file, with gene labels contained in the first column, and cell labels contained in the first row (the top-left "cell" in the matrix can either be empty or contain the first cell label).

   You can change the separator by passing the `--sep` argument to the script. For example, if you're using comma-separated values (csv), pass `--sep ,`. This will also affect the separator used in the output file.

5. Run smoothing!

   Let's say your (tab-delimited) expression matrix file is called `expression.tsv`, and you saved it in the same directory as the "knn_smooth.py" script. Then, to run smoothing with `k=15`, you would use:

   ``` bash
   python3 knn_smooth.py --k 15 --fpath expression.tsv --saveto expression_smoothed.tsv
   ```

   This will produce a smoothed matrix called `expression_smoothed.tsv`.