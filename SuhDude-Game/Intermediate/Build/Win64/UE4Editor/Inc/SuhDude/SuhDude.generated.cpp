// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "SuhDude.h"
#include "GeneratedCppIncludes.h"
#include "SuhDude.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1SuhDude() {}
	void AArduino::StaticRegisterNativesAArduino()
	{
		FNativeFunctionRegistrar::RegisterFunction(AArduino::StaticClass(), "ArduinoReadResult",(Native)&AArduino::execArduinoReadResult);
	}
	IMPLEMENT_CLASS(AArduino, 737698360);
	void ACppSpawner::StaticRegisterNativesACppSpawner()
	{
		FNativeFunctionRegistrar::RegisterFunction(ACppSpawner::StaticClass(), "WhatToSpawn",(Native)&ACppSpawner::execWhatToSpawn);
	}
	IMPLEMENT_CLASS(ACppSpawner, 2301706144);
	void AMovingObjects::StaticRegisterNativesAMovingObjects()
	{
	}
	IMPLEMENT_CLASS(AMovingObjects, 2104963519);
	void AMyCharacter::StaticRegisterNativesAMyCharacter()
	{
	}
	IMPLEMENT_CLASS(AMyCharacter, 2774603859);
	void AServer::StaticRegisterNativesAServer()
	{
		FNativeFunctionRegistrar::RegisterFunction(AServer::StaticClass(), "PrimeForAdress",(Native)&AServer::execPrimeForAdress);
		FNativeFunctionRegistrar::RegisterFunction(AServer::StaticClass(), "UploadToServer",(Native)&AServer::execUploadToServer);
	}
	IMPLEMENT_CLASS(AServer, 2188530422);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();

	SUHDUDE_API class UFunction* Z_Construct_UFunction_AArduino_ArduinoReadResult();
	SUHDUDE_API class UClass* Z_Construct_UClass_AArduino_NoRegister();
	SUHDUDE_API class UClass* Z_Construct_UClass_AArduino();
	SUHDUDE_API class UFunction* Z_Construct_UFunction_ACppSpawner_WhatToSpawn();
	SUHDUDE_API class UClass* Z_Construct_UClass_ACppSpawner_NoRegister();
	SUHDUDE_API class UClass* Z_Construct_UClass_ACppSpawner();
	SUHDUDE_API class UClass* Z_Construct_UClass_AMovingObjects_NoRegister();
	SUHDUDE_API class UClass* Z_Construct_UClass_AMovingObjects();
	SUHDUDE_API class UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
	SUHDUDE_API class UClass* Z_Construct_UClass_AMyCharacter();
	SUHDUDE_API class UFunction* Z_Construct_UFunction_AServer_PrimeForAdress();
	SUHDUDE_API class UFunction* Z_Construct_UFunction_AServer_UploadToServer();
	SUHDUDE_API class UClass* Z_Construct_UClass_AServer_NoRegister();
	SUHDUDE_API class UClass* Z_Construct_UClass_AServer();
	SUHDUDE_API class UPackage* Z_Construct_UPackage__Script_SuhDude();
	UFunction* Z_Construct_UFunction_AArduino_ArduinoReadResult()
	{
		struct Arduino_eventArduinoReadResult_Parms
		{
			FString RawDataRead;
			FString ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_AArduino();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ArduinoReadResult"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(Arduino_eventArduinoReadResult_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, Arduino_eventArduinoReadResult_Parms), 0x0010000000000580);
			UProperty* NewProp_RawDataRead = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RawDataRead"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(RawDataRead, Arduino_eventArduinoReadResult_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Arduino"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Arduino.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AArduino_NoRegister()
	{
		return AArduino::StaticClass();
	}
	UClass* Z_Construct_UClass_AArduino()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_SuhDude();
			OuterClass = AArduino::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AArduino_ArduinoReadResult());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_str = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("str"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(str, AArduino), 0x0010000000000005);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AArduino_ArduinoReadResult(), "ArduinoReadResult"); // 1129687155
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Arduino.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Arduino.h"));
				MetaData->SetValue(NewProp_str, TEXT("Category"), TEXT("Arduino"));
				MetaData->SetValue(NewProp_str, TEXT("ModuleRelativePath"), TEXT("Arduino.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArduino(Z_Construct_UClass_AArduino, &AArduino::StaticClass, TEXT("AArduino"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArduino);
	UFunction* Z_Construct_UFunction_ACppSpawner_WhatToSpawn()
	{
		struct CppSpawner_eventWhatToSpawn_Parms
		{
			int32 score;
			int32 difficulty;
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_ACppSpawner();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WhatToSpawn"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(CppSpawner_eventWhatToSpawn_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(ReturnValue, CppSpawner_eventWhatToSpawn_Parms), 0x0010000000000580);
			UProperty* NewProp_difficulty = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("difficulty"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(difficulty, CppSpawner_eventWhatToSpawn_Parms), 0x0010000000000080);
			UProperty* NewProp_score = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("score"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(score, CppSpawner_eventWhatToSpawn_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Spawner"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("CppSpawner.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACppSpawner_NoRegister()
	{
		return ACppSpawner::StaticClass();
	}
	UClass* Z_Construct_UClass_ACppSpawner()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_SuhDude();
			OuterClass = ACppSpawner::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_ACppSpawner_WhatToSpawn());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ACppSpawner_WhatToSpawn(), "WhatToSpawn"); // 3318767678
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CppSpawner.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("CppSpawner.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACppSpawner(Z_Construct_UClass_ACppSpawner, &ACppSpawner::StaticClass, TEXT("ACppSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACppSpawner);
	UClass* Z_Construct_UClass_AMovingObjects_NoRegister()
	{
		return AMovingObjects::StaticClass();
	}
	UClass* Z_Construct_UClass_AMovingObjects()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_SuhDude();
			OuterClass = AMovingObjects::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_SpeedOfMovement = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SpeedOfMovement"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SpeedOfMovement, AMovingObjects), 0x0010000000000005, Z_Construct_UScriptStruct_FVector());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MovingObjects.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MovingObjects.h"));
				MetaData->SetValue(NewProp_SpeedOfMovement, TEXT("Category"), TEXT("MovingObjects"));
				MetaData->SetValue(NewProp_SpeedOfMovement, TEXT("ModuleRelativePath"), TEXT("MovingObjects.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMovingObjects(Z_Construct_UClass_AMovingObjects, &AMovingObjects::StaticClass, TEXT("AMovingObjects"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingObjects);
	UClass* Z_Construct_UClass_AMyCharacter_NoRegister()
	{
		return AMyCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_SuhDude();
			OuterClass = AMyCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyCharacter.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCharacter(Z_Construct_UClass_AMyCharacter, &AMyCharacter::StaticClass, TEXT("AMyCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacter);
	UFunction* Z_Construct_UFunction_AServer_PrimeForAdress()
	{
		struct Server_eventPrimeForAdress_Parms
		{
			FString MessageToConvert;
			FString ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_AServer();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PrimeForAdress"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(Server_eventPrimeForAdress_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, Server_eventPrimeForAdress_Parms), 0x0010000000000580);
			UProperty* NewProp_MessageToConvert = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MessageToConvert"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(MessageToConvert, Server_eventPrimeForAdress_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Http Request"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Server.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AServer_UploadToServer()
	{
		struct Server_eventUploadToServer_Parms
		{
			FString Score;
			FString Message;
		};
		UObject* Outer=Z_Construct_UClass_AServer();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UploadToServer"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(Server_eventUploadToServer_Parms));
			UProperty* NewProp_Message = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Message"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Message, Server_eventUploadToServer_Parms), 0x0010000000000080);
			UProperty* NewProp_Score = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Score"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Score, Server_eventUploadToServer_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Http Request"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Server.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AServer_NoRegister()
	{
		return AServer::StaticClass();
	}
	UClass* Z_Construct_UClass_AServer()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_SuhDude();
			OuterClass = AServer::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AServer_PrimeForAdress());
				OuterClass->LinkChild(Z_Construct_UFunction_AServer_UploadToServer());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AServer_PrimeForAdress(), "PrimeForAdress"); // 1603696760
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AServer_UploadToServer(), "UploadToServer"); // 3924973706
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Server.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Server.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AServer(Z_Construct_UClass_AServer, &AServer::StaticClass, TEXT("AServer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AServer);
	UPackage* Z_Construct_UPackage__Script_SuhDude()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/SuhDude")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x40259250;
			Guid.B = 0xF1E1C44D;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
