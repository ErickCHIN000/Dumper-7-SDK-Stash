#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x150 (0x178 - 0x28)
// Class SubstanceCore.SubstanceGraphInstance
class USubstanceGraphInstance : public UObject
{
public:
	uint8                                        Pad_38B[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PackageURL;                                        // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USubstanceInstanceFactory*             ParentFactory;                                     // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<uint32, class UTexture2D*>              ImageSources;                                      // 0x50(0x50)(NativeAccessSpecifierPublic)
	class UMaterial*                             CreatedMaterial;                                   // 0xA0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceConstant*             ConstantCreatedMaterial;                           // 0xA8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              DynamicCreatedMaterial;                            // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<int32, struct FGuid>                    OutputTextureLinkData;                             // 0xB8(0x50)(NativeAccessSpecifierPublic)
	TMap<uint32, class USubstanceOutputData*>    OutputInstances;                                   // 0x108(0x50)(NativeAccessSpecifierPublic)
	bool                                         bIsFrozen;                                         // 0x158(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_395[0x1F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USubstanceGraphInstance* GetDefaultObj();

	void SetInputString(const class FString& Identifier, const class FString& Value);
	void SetInputInt(const class FString& Identifier, TArray<int32>& InputValues);
	bool SetInputImg(const class FString& InputName, class UObject* Value);
	void SetInputFloat(const class FString& Identifier, TArray<float>& InputValues);
	void SetInputColor(const class FString& Identifier, struct FLinearColor& Color);
	void SetInputBool(const class FString& Identifier, bool Bool);
	void RenderSync();
	TArray<class FString> GetOutputNames();
	struct FSubstanceIntInputDesc GetIntInputDesc(const class FString& Identifier);
	struct FSubstanceInstanceDesc GetInstanceDesc();
	enum class ESubstanceInputType GetInputType(const class FString& InputName);
	class FString GetInputString(const class FString& Identifier);
	TArray<class FString> GetInputNames();
	TArray<int32> GetInputInt(const class FString& Identifier);
	TArray<float> GetInputFloat(const class FString& Identifier);
	struct FLinearColor GetInputColor(const class FString& Identifier);
	bool GetInputBool(const class FString& Identifier);
	struct FSubstanceFloatInputDesc GetFloatInputDesc(const class FString& Identifier);
	class UMaterialInstanceDynamic* GetDynamicMaterialInstance(class FName Name, class UMaterial* InParentMaterial);
	class UMaterialInstanceConstant* GetConstantMaterial();
	void EnableOutput(const class FString& Identifier, bool Value);
	class USubstanceGraphInstance* Duplicate();
	void CreateOutputs();
	void CreateMaterial(const class FString& PackageName, class UMaterial* ParentMaterial);
};

// 0x70 (0x98 - 0x28)
// Class SubstanceCore.SubstanceInstanceFactory
class USubstanceInstanceFactory : public UObject
{
public:
	TArray<class USubstanceGraphInstance*>       MGraphInstances;                                   // 0x28(0x10)(ZeroConstructor, DuplicateTransient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F6[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                RelativeSourceFilePath;                            // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AbsoluteSourceFilePath;                            // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SourceFileTimestamp;                               // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESubstanceGenerationMode          GenerationMode;                                    // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FB[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USubstanceInstanceFactory* GetDefaultObj();

	TArray<class USubstanceGraphInstance*> GetGraphInstances();
	TArray<struct FSubstanceGraphDesc> GetGraphDescs();
	class USubstanceGraphInstance* CreateGraphInstance(const struct FSubstanceGraphDesc& GraphDesc, const class FString& PackageName);
};

// 0x30 (0x58 - 0x28)
// Class SubstanceCore.SubstanceOutputData
class USubstanceOutputData : public UObject
{
public:
	class UObject*                               ConnectedObject;                                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMaterialParameterInfo                ParamInfo;                                         // 0x30(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USubstanceGraphInstance*               ParentInstance;                                    // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 CacheGuid;                                         // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USubstanceOutputData* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class SubstanceCore.SubstanceSettings
class USubstanceSettings : public UObject
{
public:
	int32                                        MemoryBudgetMb;                                    // 0x28(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CPUCores;                                          // 0x2C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AsyncLoadMipClip;                                  // 0x30(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxAsyncSubstancesRenderedPerFrame;                // 0x34(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESubstanceEngineType              SubstanceEngine;                                   // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDefaultSubstanceTextureSize      DefaultSubstanceOutputSizeX;                       // 0x39(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDefaultSubstanceTextureSize      DefaultSubstanceOutputSizeY;                       // 0x3A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_427[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UMaterialInterface>     DefaultTemplateMaterial;                           // 0x40(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USubstanceSettings* GetDefaultObj();

};

// 0x60 (0x1F0 - 0x190)
// Class SubstanceCore.SubstanceTexture2D
class USubstanceTexture2D : public UTexture2DDynamic
{
public:
	uint8                                        Pad_433[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USubstanceGraphInstance*               ParentInstance;                                    // 0x1C0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureAddress                   AddressX;                                          // 0x1C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureAddress                   AddressY;                                          // 0x1C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCooked;                                           // 0x1CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43B[0x25];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USubstanceTexture2D* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SubstanceCore.SubstanceUtility
class USubstanceUtility : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USubstanceUtility* GetDefaultObj();

	void SyncRendering(class USubstanceGraphInstance* InstancesToRender);
	void SetGraphInstanceOutputSizeInt(class USubstanceGraphInstance* GraphInstance, int32 Width, int32 Height);
	void SetGraphInstanceOutputSize(class USubstanceGraphInstance* GraphInstance, enum class ESubstanceTextureSize Width, enum class ESubstanceTextureSize Height);
	void ResetInputParameters(class USubstanceGraphInstance* GraphInstance);
	TArray<class UTexture2D*> GetSubstanceTextures(class USubstanceGraphInstance* GraphInstance);
	TArray<class USubstanceGraphInstance*> GetSubstances(class UMaterialInterface* Material);
	float GetSubstanceLoadingProgress();
	TArray<class UMaterial*> GetSubstanceIncludedMaterials();
	class FString GetGraphName(class USubstanceGraphInstance* GraphInstance);
	class FString GetFactoryName(class USubstanceGraphInstance* GraphInstance);
	void EnableInstanceOutputs(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance, const TArray<int32>& OutputIndices);
	class USubstanceGraphInstance* DuplicateGraphInstance(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance);
	void DisableInstanceOutputs(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance, const TArray<int32>& OutputIndices);
	class USubstanceGraphInstance* CreateGraphInstance(class UObject* WorldContextObject, class USubstanceInstanceFactory* Factory, int32 GraphDescIndex, class UMaterial* ParentMaterial, const class FString& InstanceName);
	class USubstanceInstanceFactory* CreateAggregateSubstanceFactory(class USubstanceInstanceFactory* OutputFactory, int32 OutputFactoryGraphIndex, class USubstanceInstanceFactory* InputFactory, int32 InputFactoryGraphIndex, TArray<struct FSubstanceConnection>& Connections);
	void CopyInputParameters(class USubstanceGraphInstance* SourceGraphInstance, class USubstanceGraphInstance* DestGraphInstance);
	void ClearCache();
	void AsyncRendering(class USubstanceGraphInstance* InstancesToRender);
};

}


