
properties([parameters([string(defaultValue: '', description: 'For the swap program, we need 2 numbers', name: 'First_Number', trim: false), string(defaultValue: '', description: 'For the swap program, we need 2 numbers', name: 'Second_Number', trim: false)]), pipelineTriggers([upstream('seed_repo, ')])])


node { 

    stage('Compiling') {
        echo "compiling swap program"
        gcc swap.c -o swap
    }
    
    stage('Testing') {
        echo "Testing swap program" 
        ./swap params.First_Number params.Second_Number 
    }        
    /*stage('Archiving') {
             echo "Archiving swap program output" 
        }*/
 }
