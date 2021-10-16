<?php
	//função que verifica se o usuario é administrador ou não.
	function usuarios($usuario, $senha){
		if($usuario == 'marcosgabriel62@gmail.com' && $senha == '1234'){
			$_SESSION['administrador'] = true;
		}
		
		if($usuario != 'marcosgabriel62@gmail.com' && $senha != '1234'){
			$_SESSION['administrador'] = false;
		}
	}

	
?>