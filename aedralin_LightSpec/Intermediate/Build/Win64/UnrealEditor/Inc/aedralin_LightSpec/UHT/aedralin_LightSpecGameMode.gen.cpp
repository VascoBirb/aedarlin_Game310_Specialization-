// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "aedralin_LightSpec/aedralin_LightSpecGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeaedralin_LightSpecGameMode() {}

// Begin Cross Module References
AEDRALIN_LIGHTSPEC_API UClass* Z_Construct_UClass_Aaedralin_LightSpecGameMode();
AEDRALIN_LIGHTSPEC_API UClass* Z_Construct_UClass_Aaedralin_LightSpecGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_aedralin_LightSpec();
// End Cross Module References

// Begin Class Aaedralin_LightSpecGameMode
void Aaedralin_LightSpecGameMode::StaticRegisterNativesAaedralin_LightSpecGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Aaedralin_LightSpecGameMode);
UClass* Z_Construct_UClass_Aaedralin_LightSpecGameMode_NoRegister()
{
	return Aaedralin_LightSpecGameMode::StaticClass();
}
struct Z_Construct_UClass_Aaedralin_LightSpecGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "aedralin_LightSpecGameMode.h" },
		{ "ModuleRelativePath", "aedralin_LightSpecGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aaedralin_LightSpecGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Aaedralin_LightSpecGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_aedralin_LightSpec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Aaedralin_LightSpecGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Aaedralin_LightSpecGameMode_Statics::ClassParams = {
	&Aaedralin_LightSpecGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Aaedralin_LightSpecGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_Aaedralin_LightSpecGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Aaedralin_LightSpecGameMode()
{
	if (!Z_Registration_Info_UClass_Aaedralin_LightSpecGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Aaedralin_LightSpecGameMode.OuterSingleton, Z_Construct_UClass_Aaedralin_LightSpecGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Aaedralin_LightSpecGameMode.OuterSingleton;
}
template<> AEDRALIN_LIGHTSPEC_API UClass* StaticClass<Aaedralin_LightSpecGameMode>()
{
	return Aaedralin_LightSpecGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Aaedralin_LightSpecGameMode);
Aaedralin_LightSpecGameMode::~Aaedralin_LightSpecGameMode() {}
// End Class Aaedralin_LightSpecGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_alexa_OneDrive_Documents_Unreal_Projects_aedralin_LightSpec_Source_aedralin_LightSpec_aedralin_LightSpecGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Aaedralin_LightSpecGameMode, Aaedralin_LightSpecGameMode::StaticClass, TEXT("Aaedralin_LightSpecGameMode"), &Z_Registration_Info_UClass_Aaedralin_LightSpecGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Aaedralin_LightSpecGameMode), 2881174774U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alexa_OneDrive_Documents_Unreal_Projects_aedralin_LightSpec_Source_aedralin_LightSpec_aedralin_LightSpecGameMode_h_1253942744(TEXT("/Script/aedralin_LightSpec"),
	Z_CompiledInDeferFile_FID_Users_alexa_OneDrive_Documents_Unreal_Projects_aedralin_LightSpec_Source_aedralin_LightSpec_aedralin_LightSpecGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alexa_OneDrive_Documents_Unreal_Projects_aedralin_LightSpec_Source_aedralin_LightSpec_aedralin_LightSpecGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
