// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "aedralin_LightSpec/aedralin_LightSpecCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeaedralin_LightSpecCharacter() {}

// Begin Cross Module References
AEDRALIN_LIGHTSPEC_API UClass* Z_Construct_UClass_Aaedralin_LightSpecCharacter();
AEDRALIN_LIGHTSPEC_API UClass* Z_Construct_UClass_Aaedralin_LightSpecCharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_aedralin_LightSpec();
// End Cross Module References

// Begin Class Aaedralin_LightSpecCharacter
void Aaedralin_LightSpecCharacter::StaticRegisterNativesAaedralin_LightSpecCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Aaedralin_LightSpecCharacter);
UClass* Z_Construct_UClass_Aaedralin_LightSpecCharacter_NoRegister()
{
	return Aaedralin_LightSpecCharacter::StaticClass();
}
struct Z_Construct_UClass_Aaedralin_LightSpecCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "aedralin_LightSpecCharacter.h" },
		{ "ModuleRelativePath", "aedralin_LightSpecCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "aedralin_LightSpecCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "aedralin_LightSpecCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "aedralin_LightSpecCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "aedralin_LightSpecCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "aedralin_LightSpecCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "aedralin_LightSpecCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aaedralin_LightSpecCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aaedralin_LightSpecCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Aaedralin_LightSpecCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aaedralin_LightSpecCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Aaedralin_LightSpecCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aaedralin_LightSpecCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Aaedralin_LightSpecCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aaedralin_LightSpecCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Aaedralin_LightSpecCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aaedralin_LightSpecCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Aaedralin_LightSpecCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aaedralin_LightSpecCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Aaedralin_LightSpecCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Aaedralin_LightSpecCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aaedralin_LightSpecCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aaedralin_LightSpecCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aaedralin_LightSpecCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aaedralin_LightSpecCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aaedralin_LightSpecCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aaedralin_LightSpecCharacter_Statics::NewProp_LookAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Aaedralin_LightSpecCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_Aaedralin_LightSpecCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_aedralin_LightSpec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Aaedralin_LightSpecCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Aaedralin_LightSpecCharacter_Statics::ClassParams = {
	&Aaedralin_LightSpecCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_Aaedralin_LightSpecCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_Aaedralin_LightSpecCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Aaedralin_LightSpecCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_Aaedralin_LightSpecCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Aaedralin_LightSpecCharacter()
{
	if (!Z_Registration_Info_UClass_Aaedralin_LightSpecCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Aaedralin_LightSpecCharacter.OuterSingleton, Z_Construct_UClass_Aaedralin_LightSpecCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Aaedralin_LightSpecCharacter.OuterSingleton;
}
template<> AEDRALIN_LIGHTSPEC_API UClass* StaticClass<Aaedralin_LightSpecCharacter>()
{
	return Aaedralin_LightSpecCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Aaedralin_LightSpecCharacter);
Aaedralin_LightSpecCharacter::~Aaedralin_LightSpecCharacter() {}
// End Class Aaedralin_LightSpecCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_alexa_OneDrive_Documents_Unreal_Projects_aedralin_LightSpec_Source_aedralin_LightSpec_aedralin_LightSpecCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Aaedralin_LightSpecCharacter, Aaedralin_LightSpecCharacter::StaticClass, TEXT("Aaedralin_LightSpecCharacter"), &Z_Registration_Info_UClass_Aaedralin_LightSpecCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Aaedralin_LightSpecCharacter), 11437649U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alexa_OneDrive_Documents_Unreal_Projects_aedralin_LightSpec_Source_aedralin_LightSpec_aedralin_LightSpecCharacter_h_2783194720(TEXT("/Script/aedralin_LightSpec"),
	Z_CompiledInDeferFile_FID_Users_alexa_OneDrive_Documents_Unreal_Projects_aedralin_LightSpec_Source_aedralin_LightSpec_aedralin_LightSpecCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alexa_OneDrive_Documents_Unreal_Projects_aedralin_LightSpec_Source_aedralin_LightSpec_aedralin_LightSpecCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
