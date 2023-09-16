// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "battletank/GameStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameStruct() {}
// Cross Module References
	BATTLETANK_API UEnum* Z_Construct_UEnum_battletank_ECannonType();
	UPackage* Z_Construct_UPackage__Script_battletank();
	BATTLETANK_API UClass* Z_Construct_UClass_UGameStruct_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_UGameStruct();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECannonType;
	static UEnum* ECannonType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECannonType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECannonType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_battletank_ECannonType, Z_Construct_UPackage__Script_battletank(), TEXT("ECannonType"));
		}
		return Z_Registration_Info_UEnum_ECannonType.OuterSingleton;
	}
	template<> BATTLETANK_API UEnum* StaticEnum<ECannonType>()
	{
		return ECannonType_StaticEnum();
	}
	struct Z_Construct_UEnum_battletank_ECannonType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_battletank_ECannonType_Statics::Enumerators[] = {
		{ "ECannonType::FireTrace", (int64)ECannonType::FireTrace },
		{ "ECannonType::FireProjectile", (int64)ECannonType::FireProjectile },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_battletank_ECannonType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FireProjectile.DisplayName", "Use Projectile" },
		{ "FireProjectile.Name", "ECannonType::FireProjectile" },
		{ "FireTrace.DisplayName", "Use Trace" },
		{ "FireTrace.Name", "ECannonType::FireTrace" },
		{ "ModuleRelativePath", "GameStruct.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_battletank_ECannonType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_battletank,
		nullptr,
		"ECannonType",
		"ECannonType",
		Z_Construct_UEnum_battletank_ECannonType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_battletank_ECannonType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_battletank_ECannonType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_battletank_ECannonType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_battletank_ECannonType()
	{
		if (!Z_Registration_Info_UEnum_ECannonType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECannonType.InnerSingleton, Z_Construct_UEnum_battletank_ECannonType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECannonType.InnerSingleton;
	}
	void UGameStruct::StaticRegisterNativesUGameStruct()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameStruct);
	UClass* Z_Construct_UClass_UGameStruct_NoRegister()
	{
		return UGameStruct::StaticClass();
	}
	struct Z_Construct_UClass_UGameStruct_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameStruct_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_battletank,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameStruct_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameStruct.h" },
		{ "ModuleRelativePath", "GameStruct.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameStruct_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameStruct>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameStruct_Statics::ClassParams = {
		&UGameStruct::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameStruct_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameStruct_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameStruct()
	{
		if (!Z_Registration_Info_UClass_UGameStruct.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameStruct.OuterSingleton, Z_Construct_UClass_UGameStruct_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameStruct.OuterSingleton;
	}
	template<> BATTLETANK_API UClass* StaticClass<UGameStruct>()
	{
		return UGameStruct::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameStruct);
	struct Z_CompiledInDeferFile_FID_battletank_Source_battletank_GameStruct_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_battletank_Source_battletank_GameStruct_h_Statics::EnumInfo[] = {
		{ ECannonType_StaticEnum, TEXT("ECannonType"), &Z_Registration_Info_UEnum_ECannonType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3374589899U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_battletank_Source_battletank_GameStruct_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameStruct, UGameStruct::StaticClass, TEXT("UGameStruct"), &Z_Registration_Info_UClass_UGameStruct, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameStruct), 4243489138U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_battletank_Source_battletank_GameStruct_h_1234681697(TEXT("/Script/battletank"),
		Z_CompiledInDeferFile_FID_battletank_Source_battletank_GameStruct_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_battletank_Source_battletank_GameStruct_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_battletank_Source_battletank_GameStruct_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_battletank_Source_battletank_GameStruct_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
