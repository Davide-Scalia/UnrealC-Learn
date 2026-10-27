// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RotatingPlatform.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRotatingPlatform() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
LEARNINGCPLUSPLUS_API UClass* Z_Construct_UClass_ARotatingPlatform();
LEARNINGCPLUSPLUS_API UClass* Z_Construct_UClass_ARotatingPlatform_NoRegister();
UPackage* Z_Construct_UPackage__Script_LearningCplusplus();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARotatingPlatform ********************************************************
void ARotatingPlatform::StaticRegisterNativesARotatingPlatform()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARotatingPlatform;
UClass* ARotatingPlatform::GetPrivateStaticClass()
{
	using TClass = ARotatingPlatform;
	if (!Z_Registration_Info_UClass_ARotatingPlatform.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RotatingPlatform"),
			Z_Registration_Info_UClass_ARotatingPlatform.InnerSingleton,
			StaticRegisterNativesARotatingPlatform,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ARotatingPlatform.InnerSingleton;
}
UClass* Z_Construct_UClass_ARotatingPlatform_NoRegister()
{
	return ARotatingPlatform::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARotatingPlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RotatingPlatform.h" },
		{ "ModuleRelativePath", "Public/RotatingPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformMesh_MetaData[] = {
		{ "Category", "RotatingPlatform" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RotatingPlatform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlatformMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotatingPlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotatingPlatform_Statics::NewProp_PlatformMesh = { "PlatformMesh", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotatingPlatform, PlatformMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformMesh_MetaData), NewProp_PlatformMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARotatingPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingPlatform_Statics::NewProp_PlatformMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingPlatform_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARotatingPlatform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_LearningCplusplus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingPlatform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARotatingPlatform_Statics::ClassParams = {
	&ARotatingPlatform::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARotatingPlatform_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingPlatform_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingPlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_ARotatingPlatform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARotatingPlatform()
{
	if (!Z_Registration_Info_UClass_ARotatingPlatform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARotatingPlatform.OuterSingleton, Z_Construct_UClass_ARotatingPlatform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARotatingPlatform.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARotatingPlatform);
ARotatingPlatform::~ARotatingPlatform() {}
// ********** End Class ARotatingPlatform **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ForkRepository_LearnUnrealC___LearningCplusplus_Source_LearningCplusplus_Public_RotatingPlatform_h__Script_LearningCplusplus_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARotatingPlatform, ARotatingPlatform::StaticClass, TEXT("ARotatingPlatform"), &Z_Registration_Info_UClass_ARotatingPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARotatingPlatform), 2637455589U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ForkRepository_LearnUnrealC___LearningCplusplus_Source_LearningCplusplus_Public_RotatingPlatform_h__Script_LearningCplusplus_2357988945(TEXT("/Script/LearningCplusplus"),
	Z_CompiledInDeferFile_FID_ForkRepository_LearnUnrealC___LearningCplusplus_Source_LearningCplusplus_Public_RotatingPlatform_h__Script_LearningCplusplus_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ForkRepository_LearnUnrealC___LearningCplusplus_Source_LearningCplusplus_Public_RotatingPlatform_h__Script_LearningCplusplus_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
