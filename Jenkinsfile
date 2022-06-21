podTemplate(yaml: '''
apiVersion: v1
kind: Pod
spec:
  containers:
  - name: docker
    image: docker:19.03.1-dind
    securityContext:
      privileged: true
    env:
      - name: DOCKER_TLS_CERTDIR
        value: ""
''') {
 
    node(POD_LABEL) {
        git 'https://github.com/jyo925/open5gs_docker_build_forCI.git'
       
        stage('Build docker image') {
            container('docker') {
                sh "docker build -t jyo925/jiyoon-open5gs:v2.0 ."
                }
        }
        

        stage('Push docker image') {
            container('docker') {
                withDockerRegistry([ credentialsId: "dockerHub", url: "https://registry.hub.docker.com" ]) {
                    docker.image("jyo925/jiyoon-open5gs:v2.0").push()
                }
            }
        }
    }
}



