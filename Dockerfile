FROM ubuntu:16.04
RUN echo "Running the docker file"
RUN apt-get update 
RUN apt-get install apt-utils -y
RUN apt-get install vim -y 
RUN apt-get install git -y
RUN apt-get install cmake -y
RUN apt-get install gcc-5 -y
RUN apt-get install g++-5 -y
RUN git clone --depth=1 https://github.com/amix/vimrc.git ~/.vim_runtime
RUN sh ~/.vim_runtime/install_awesome_vimrc.sh