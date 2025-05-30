import fetch from 'node-fetch';
import FormData from 'form-data';
import { createReadStream } from 'fs';

async function uploadFile() {
  const form = new FormData();
  form.append('file', createReadStream('./1.png')); // 替换为实际文件路径

  const response = await fetch('http://train2025.hitctf.cn:25025/upload.php', {
    method: 'POST',
    headers: {
      'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.7',
      'Accept-Encoding': 'gzip, deflate',
      'Accept-Language': 'zh-CN,zh;q=0.9,en;q=0.8,en-GB;q=0.7,en-US;q=0.6,ja;q=0.5',
      'Cache-Control': 'max-age=0',
      'Connection': 'keep-alive',
      'Cookie': 'session_blueberry=eyJ1c2VyX2lkIjoxN30.aDRkhw.7XVMvYzLHBiHGdaoYqOwsgi-G3M',
      'Origin': 'http://train2025.hitctf.cn:25025',
      'Referer': 'http://train2025.hitctf.cn:25025/',
      'Upgrade-Insecure-Requests': '1',
      'User-Agent': 'Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/136.0.0.0 Safari/537.36 Edg/136.0.0.0',
      ...form.getHeaders()
    },
    body: form
  });

  const result = await response.text();
  console.log(result);
}

uploadFile().catch(console.error);    