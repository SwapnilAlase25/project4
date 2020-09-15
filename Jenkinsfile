
properties([parameters([string(defaultValue: '5', description: 'For the swap program, we need 2 numbers', name: 'First_Number', trim: false), string(defaultValue: '10', description: 'For the swap program, we need 2 numbers', name: 'Second_Number', trim: false)]), pipelineTriggers([upstream('seed_repo, '),cron('H * * * *')])])


node { 

    try{
        stage('Compiling') {
            echo "compiling swap program"
            sh 'gcc --version'
            sh 'pwd'
            sh 'cd /home/alaseswa/.jenkins/workspace/Project4@script'
            sh 'ls -l'
            sh 'gcc swap.c -o swap'
        }
    }catch(e){
        echo "Compiling stage failed! "
    }
    
    try{
        stage('Testing') {
            echo "Testing swap program" 
            sh './swap params.First_Number params.Second_Number' 
        }
     }catch(e){
        echo "Testing stage failed! "
    }
    
    try{
        stage('Archiving') {
                 echo "Archiving swap program output" 
            }
     }catch(e){
        echo "Archiving stage failed! "
    }
 }
