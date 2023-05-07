import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      home: Scaffold(
        appBar: AppBar(
          centerTitle: false,
          titleTextStyle: TextStyle(
            fontSize: 28, 
            color: Colors.black, 
            fontWeight: FontWeight.bold
          ),
          title: Text("Movie Reviews"),
          actions: <Widget>[
            Padding(
              padding: const EdgeInsets.symmetric(horizontal: 15, vertical: 0),
              child: IconButton(
                icon: const Icon(
                  Icons.person,
                  color: Colors.black,
                  size: 40,
                ),
                tooltip: 'Show Snackbar',
                onPressed: () {
                  ScaffoldMessenger.of(context).showSnackBar(
                    const SnackBar(content: Text('This is a snackbar'))
                  );
                },
              ),
            ),
          ],
          backgroundColor: Colors.white70,
        ),
        body: Column(
          children: [
            Padding(
              padding: const EdgeInsets.all(16),
              child: TextField(
                obscureText: true,
                decoration: InputDecoration(
                  suffixIcon: Icon(Icons.search),
                  border: OutlineInputBorder(),
                  labelText: '영화 제목을 입력해 주세요.',
                ),
              ),
            ),
            Expanded(
              child: ListView.builder(
                itemBuilder: (BuildContext context, int index) {
                  // 아이템 빌드 로직 작성
                },
                itemCount: 10,
              ),
            ),
          ],
        ),
      ),
    );
  }
}