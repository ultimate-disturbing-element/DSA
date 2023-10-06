pipeline{
    agent any 
    stages{
     stage("Prepare") {
            steps {
                echo "INPROGRESS"
            }
        }

        stage("Build") {
            steps {
                git(
                    url: "https://Lyghtjr:token/Lyghtjr/DSA.git",
                    branch: "main",
                    credentialsId: "lyghtjr1530",
                    changelog: true,
                    poll: true
                )
            }
        }

        stage("Run tests") {
            steps {
              echo "Start Test"
            }
        }

        stage("Determine new version") {
            when {
                branch "main"
            }

            steps {
                echo "New Version"
            }
        }
    }
}
