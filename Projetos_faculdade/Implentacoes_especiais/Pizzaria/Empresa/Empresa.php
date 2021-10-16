<?php


class Empresa

{
private $id;
private $nome;
private $endereco;

 function setIdEmpresa($id) { $this->id = $id; }
function getIdEmpresa() { return $this->id; }
function setNome($nome) { $this->nome = $nome; }
function getNome() { return $this->nome; }
function setEndereco($endereco) { $this->endereco = $endereco; }
function getEndereco() { return $this->endereco; }

}