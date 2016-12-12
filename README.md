# Tools for the shell bash

## Installation:

```shell
mkdir .shell-tools
git clone https://github.com/rich-97/shell-tools ~/.shell-tools
```

Write in your `.bashrc` file.

```shell
export PATH=${PATH}:~/.shell-tools/shell-tools
```

## Usage:

### run

The run file is for run or (run or compile) any file of any progaming language, But the languages for now support is c/c++, bash scritps and javascript running on with nodejs platform.

The command is `run file [-o [dir]]`, the parameter `-o` is for output file and this is optional parameter, `dir` will be the name of directory of output if omitted the output directory will be `bin`, more info execute the comand wihout parameters for print the usage.

### path

The path file is a litle tool for paths.

The command is `path [-dbe] [-d] [-b] [-e] path/of/file`, for more information execute the comand wihout parameters.

This README will be upgrade soon.
