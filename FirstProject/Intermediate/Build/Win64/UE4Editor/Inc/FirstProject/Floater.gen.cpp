// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProject/GameplayActors/Floater.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloater() {}
// Cross Module References
	FIRSTPROJECT_API UClass* Z_Construct_UClass_AFloater_NoRegister();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_AFloater();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FirstProject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AFloater::StaticRegisterNativesAFloater()
	{
	}
	UClass* Z_Construct_UClass_AFloater_NoRegister()
	{
		return AFloater::StaticClass();
	}
	struct Z_Construct_UClass_AFloater_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntialLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IntialLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlacedLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlacedLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntialDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IntialDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldFloat_MetaData[];
#endif
		static void NewProp_bShouldFloat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIntializeFloaterLocations_MetaData[];
#endif
		static void NewProp_bIntializeFloaterLocations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIntializeFloaterLocations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialTorque_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialTorque;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloater_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayActors/Floater.h" },
		{ "ModuleRelativePath", "GameplayActors/Floater.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "ActorMeshComponents" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameplayActors/Floater.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloater, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_IntialLocation_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "Comment", "// Location used by SetActorLocation when beginPlay() is called\n" },
		{ "ModuleRelativePath", "GameplayActors/Floater.h" },
		{ "ToolTip", "Location used by SetActorLocation when beginPlay() is called" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_IntialLocation = { "IntialLocation", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloater, IntialLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_IntialLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_IntialLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_PlacedLocation_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "Comment", "// Location of the actor when dragged in from the editor\n" },
		{ "ModuleRelativePath", "GameplayActors/Floater.h" },
		{ "ToolTip", "Location of the actor when dragged in from the editor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_PlacedLocation = { "PlacedLocation", nullptr, (EPropertyFlags)0x0010000000020805, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloater, PlacedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_PlacedLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_PlacedLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_WorldOrigin_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "ModuleRelativePath", "GameplayActors/Floater.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_WorldOrigin = { "WorldOrigin", nullptr, (EPropertyFlags)0x0010000000030015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloater, WorldOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_WorldOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_WorldOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_IntialDirection_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "ModuleRelativePath", "GameplayActors/Floater.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_IntialDirection = { "IntialDirection", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloater, IntialDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_IntialDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_IntialDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_bShouldFloat_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "ModuleRelativePath", "GameplayActors/Floater.h" },
	};
#endif
	void Z_Construct_UClass_AFloater_Statics::NewProp_bShouldFloat_SetBit(void* Obj)
	{
		((AFloater*)Obj)->bShouldFloat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_bShouldFloat = { "bShouldFloat", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFloater), &Z_Construct_UClass_AFloater_Statics::NewProp_bShouldFloat_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_bShouldFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_bShouldFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_bIntializeFloaterLocations_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "ModuleRelativePath", "GameplayActors/Floater.h" },
	};
#endif
	void Z_Construct_UClass_AFloater_Statics::NewProp_bIntializeFloaterLocations_SetBit(void* Obj)
	{
		((AFloater*)Obj)->bIntializeFloaterLocations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_bIntializeFloaterLocations = { "bIntializeFloaterLocations", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFloater), &Z_Construct_UClass_AFloater_Statics::NewProp_bIntializeFloaterLocations_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_bIntializeFloaterLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_bIntializeFloaterLocations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_InitialForce_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "ModuleRelativePath", "GameplayActors/Floater.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_InitialForce = { "InitialForce", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloater, InitialForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_InitialForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_InitialForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_InitialTorque_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "ModuleRelativePath", "GameplayActors/Floater.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_InitialTorque = { "InitialTorque", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloater, InitialTorque), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_InitialTorque_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_InitialTorque_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloater_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_IntialLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_PlacedLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_WorldOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_IntialDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_bShouldFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_bIntializeFloaterLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_InitialForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_InitialTorque,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloater_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloater>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFloater_Statics::ClassParams = {
		&AFloater::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFloater_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFloater()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFloater_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFloater, 639495659);
	template<> FIRSTPROJECT_API UClass* StaticClass<AFloater>()
	{
		return AFloater::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFloater(Z_Construct_UClass_AFloater, &AFloater::StaticClass, TEXT("/Script/FirstProject"), TEXT("AFloater"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloater);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
