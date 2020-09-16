
properties([parameters([string(defaultValue: '5', description: 'For the swap program, we need 2 numbers', name: 'FirstNumber', trim: false), string(defaultValue: '10', description: 'For the swap program, we need 2 numbers', name: 'SecondNumber', trim: false)]), pipelineTriggers([upstream('seed_repo, '),cron('H * * * *')])])
def repo_branch = 'master'
def repo_url = 'https://github.com/SwapnilAlase25/project4.git'
//def one = '50'
//def two = '100'


node { 

    try{
    stage("Get project"){
        git branch: repo_branch, url: repo_url
        }
    }catch(e){
        echo "Get project failed! "
    }
    
    try{
        stage('Compiling') {
            echo "compiling swap program"
            sh 'gcc --version'
            //sh 'pwd'
            sh 'gcc swap.c -o swap'
            //print "Hello ${name}"
        }
    }catch(e){
        echo "Compiling stage failed! "
    }
    
    try{
        stage('Testing') {
            echo "Testing swap program" 
            sh "./swap ${params.FirstNumber} ${params.SecondNumber}" 
        }
     }catch(e){
        echo "Testing stage failed! "
    }
    
    try{
        stage('Archiving') {
            echo "Archiving swap program output" 
            sh "./swap ${params.FirstNumber} ${params.SecondNumber} > log.txt" 
            
            }
     }catch(e){
        echo "Archiving stage failed! "
    }
 }
