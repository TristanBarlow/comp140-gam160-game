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
	void ACppSpawner::StaticRegisterNativesACppSpawner()
	{
		FNativeFunctionRegistrar::RegisterFunction(ACppSpawner::StaticClass(), "WhatToSpawn",(Native)&ACppSpawner::execWhatToSpawn);
	}
	IMPLEMENT_CLASS(ACppSpawner, 2301706144);
	void AMovingObjects::StaticRegisterNativesAMovingObjects()
	{
	}
	IMPLEMENT_CLASS(AMovingObjects, 2104963519);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();

	SUHDUDE_API class UFunction* Z_Construct_UFunction_ACppSpawner_WhatToSpawn();
	SUHDUDE_API class UClass* Z_Construct_UClass_ACppSpawner_NoRegister();
	SUHDUDE_API class UClass* Z_Construct_UClass_ACppSpawner();
	SUHDUDE_API class UClass* Z_Construct_UClass_AMovingObjects_NoRegister();
	SUHDUDE_API class UClass* Z_Construct_UClass_AMovingObjects();
	SUHDUDE_API class UPackage* Z_Construct_UPackage__Script_SuhDude();
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
	UPackage* Z_Construct_UPackage__Script_SuhDude()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/SuhDude")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xBD303057;
			Guid.B = 0xC821EE5D;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
