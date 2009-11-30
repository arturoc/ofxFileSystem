#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){
	cout << "testing file copy" << endl;
	file.openReadOnly("folder1/prueba.txt");
	file.copyTo("folder2/copia.txt");
	cout << endl;

	cout << "----------------------------------------------" << endl;
	cout << "testing file name and path" << endl;
	cout << file.getName() << " - path: " << file.getPath() << endl;
	cout << endl;

	cout << "----------------------------------------------" << endl;
	cout << "testing text file content" << endl;
	cout << file.getTextContent()<< endl;
	file.close();
	cout << endl;


	cout << "----------------------------------------------" << endl;
	cout << "testing binary content" << endl;
	file.openReadOnly("folder1/ofw-logo.gif");
	vector<char> image = file.getContent();
	cout << "size of read file: " << image.size() << endl;
	file.close();
	cout << endl;


	cout << "----------------------------------------------" << endl;
	cout << "testing dir listing" << endl;
	dir.open("folder1");
	cout << "directories:" << endl;
	for(int i=0; i<dir.getNumDirs(); i++){
		cout << dir.getDirName(i) << endl;
	}
	cout << endl;
	cout << "files:" << endl;
	for(int i=0; i<dir.getNumFiles(); i++){
		cout << dir.getFileName(i) << endl;
	}
	cout << endl;

	cout << "----------------------------------------------" << endl;
	cout << "testing dir copy" << endl;
	dir.copyTo("folder3");
	dir.copyTo("folder4");
	dir.close();

	cout << "----------------------------------------------" << endl;
	cout << "testing dir removing" << endl;
	dir.open("folder4");
	dir.remove();
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){


}


//--------------------------------------------------------------
void testApp::keyPressed(int key){


}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
}

//--------------------------------------------------------------
void testApp::mouseReleased(){
}


