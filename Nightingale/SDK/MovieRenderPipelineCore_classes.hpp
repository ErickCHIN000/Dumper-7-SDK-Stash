#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class MovieRenderPipelineCore.MovieGraphBlueprintLibrary
class UMovieGraphBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieGraphBlueprintLibrary* GetDefaultObj();

	class FString ResolveFilenameFormatArguments(const class FString& InFormatString, struct FMovieGraphFilenameResolveParams& InParams, struct FMovieGraphResolveArgs* OutMergedFormatArgs);
	struct FIntPoint GetEffectiveOutputResolution(class UMovieGraphEvaluatedConfig* InEvaluatedGraph, class FName& InBranchName);
	struct FFrameRate GetEffectiveFrameRate(class UMovieGraphOutputSettingNode* InNode, struct FFrameRate& InDefaultRate);
};

// 0x68 (0x90 - 0x28)
// Class MovieRenderPipelineCore.MovieGraphNode
class UMovieGraphNode : public UObject
{
public:
	uint8                                        Pad_1826[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieGraphPin*>                InputPins;                                         // 0x40(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UMovieGraphPin*>                OutputPins;                                        // 0x50(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FInstancedPropertyBag                 DynamicProperties;                                 // 0x60(0x10)(Edit, Protected, NativeAccessSpecifierProtected)
	TArray<struct FMovieGraphPropertyInfo>       ExposedPropertyInfo;                               // 0x70(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FGuid                                 Guid;                                              // 0x80(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMovieGraphNode* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class MovieRenderPipelineCore.MovieGraphBranchNode
class UMovieGraphBranchNode : public UMovieGraphNode
{
public:

	static class UClass* StaticClass();
	static class UMovieGraphBranchNode* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class MovieRenderPipelineCore.MovieGraphSettingNode
class UMovieGraphSettingNode : public UMovieGraphNode
{
public:

	static class UClass* StaticClass();
	static class UMovieGraphSettingNode* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class MovieRenderPipelineCore.MovieGraphRenderPassNode
class UMovieGraphRenderPassNode : public UMovieGraphSettingNode
{
public:

	static class UClass* StaticClass();
	static class UMovieGraphRenderPassNode* GetDefaultObj();

};

// 0xF0 (0x180 - 0x90)
// Class MovieRenderPipelineCore.MovieGraphBurnInNode
class UMovieGraphBurnInNode : public UMovieGraphRenderPassNode
{
public:
	uint8                                        bOverride_BurnInClass : 1;                         // Mask: 0x1, PropSize: 0x10x90(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_bCompositeOntoFinalImage : 1;            // Mask: 0x2, PropSize: 0x10x90(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_5B : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_189B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftClassPath                        BurnInClass;                                       // 0x98(0x20)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCompositeOntoFinalImage;                          // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18A2[0x67];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UClass*, class UMovieGraphBurnInWidget*> BurnInWidgetInstances;                             // 0x120(0x50)(ExportObject, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_18A6[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieGraphBurnInNode* GetDefaultObj();

};

// 0x0 (0x2C0 - 0x2C0)
// Class MovieRenderPipelineCore.MovieGraphBurnInWidget
class UMovieGraphBurnInWidget : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UMovieGraphBurnInWidget* GetDefaultObj();

	void UpdateForGraph(class UMovieGraphPipeline* InGraphPipeline);
};

// 0x20 (0xB0 - 0x90)
// Class MovieRenderPipelineCore.MovieGraphCollectionNode
class UMovieGraphCollectionNode : public UMovieGraphSettingNode
{
public:
	uint8                                        bOverride_CollectionName : 1;                      // Mask: 0x1, PropSize: 0x10x90(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_QueryClass : 1;                          // Mask: 0x2, PropSize: 0x10x90(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_5C : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_18EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CollectionName;                                    // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMoviePipelineCollectionQuery*         QueryClass;                                        // 0xA8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieGraphCollectionNode* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MovieRenderPipelineCore.MovieGraphValueContainer
class UMovieGraphValueContainer : public UObject
{
public:
	struct FInstancedPropertyBag                 Value;                                             // 0x28(0x10)(Edit, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieGraphValueContainer* GetDefaultObj();

	void SetValueTypeObject(class UObject* ValueTypeObject);
	void SetValueType(enum class EMovieGraphValueType ValueType);
	bool SetValueText(class FText& InValue);
	bool SetValueString(const class FString& InValue);
	bool SetValueSerializedString(const class FString& NewValue);
	bool SetValueObject(class UObject* InValue);
	bool SetValueName(class FName InValue);
	bool SetValueInt64(int64 InValue);
	bool SetValueInt32(int32 InValue);
	bool SetValueFloat(float InValue);
	bool SetValueEnum(uint8 InValue, class UEnum* Enum);
	bool SetValueDouble(double InValue);
	void SetValueContainerType(enum class EMovieGraphContainerType ContainerType);
	bool SetValueClass(class UClass* InValue);
	bool SetValueByte(uint8 InValue);
	bool SetValueBool(bool bInValue);
	class UObject* GetValueTypeObject();
	enum class EMovieGraphValueType GetValueType();
	bool GetValueText(class FText* OutValue);
	bool GetValueString(class FString* OutValue);
	class FString GetValueSerializedString();
	bool GetValueObject(class UObject* OutValue, class UClass* RequestedClass);
	bool GetValueName(class FName* OutValue);
	bool GetValueInt64(int64* OutValue);
	bool GetValueInt32(int32* OutValue);
	bool GetValueFloat(float* OutValue);
	bool GetValueEnum(uint8* OutValue, class UEnum* RequestedEnum);
	bool GetValueDouble(double* OutValue);
	enum class EMovieGraphContainerType GetValueContainerType();
	bool GetValueClass(class UClass* OutValue);
	bool GetValueByte(uint8* OutValue);
	bool GetValueBool(bool* bOutValue);
};

// 0x38 (0x70 - 0x38)
// Class MovieRenderPipelineCore.MovieGraphMember
class UMovieGraphMember : public UMovieGraphValueContainer
{
public:
	class FString                                Description;                                       // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x48(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 Guid;                                              // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsEditable;                                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D56[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieGraphMember* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class MovieRenderPipelineCore.MovieGraphVariable
class UMovieGraphVariable : public UMovieGraphMember
{
public:
	bool                                         bIsGlobal;                                         // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D71[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieGraphVariable* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class MovieRenderPipelineCore.MovieGraphInterfaceBase
class UMovieGraphInterfaceBase : public UMovieGraphMember
{
public:
	bool                                         bIsBranch;                                         // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D8A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieGraphInterfaceBase* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class MovieRenderPipelineCore.MovieGraphInput
class UMovieGraphInput : public UMovieGraphInterfaceBase
{
public:

	static class UClass* StaticClass();
	static class UMovieGraphInput* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class MovieRenderPipelineCore.MovieGraphOutput
class UMovieGraphOutput : public UMovieGraphInterfaceBase
{
public:

	static class UClass* StaticClass();
	static class UMovieGraphOutput* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class MovieRenderPipelineCore.MovieGraphEvaluatedConfig
class UMovieGraphEvaluatedConfig : public UObject
{
public:
	TMap<class FName, struct FMovieGraphEvaluatedBranchConfig> BranchConfigMapping;                               // 0x28(0x50)(Transient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieGraphEvaluatedConfig* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class MovieRenderPipelineCore.MovieGraphConfig
class UMovieGraphConfig : public UObject
{
public:
	TArray<class UMovieGraphNode*>               AllNodes;                                          // 0x28(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UMovieGraphNode*                       InputNode;                                         // 0x38(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMovieGraphNode*                       OutputNode;                                        // 0x40(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMovieGraphVariable*>           Variables;                                         // 0x48(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UMovieGraphInput*>              Inputs;                                            // 0x58(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UMovieGraphOutput*>             Outputs;                                           // 0x68(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieGraphConfig* GetDefaultObj();

	TArray<class UMovieGraphVariable*> GetVariables(bool bIncludeGlobal);
	class UMovieGraphEvaluatedConfig* CreateFlattenedGraph(struct FMovieGraphTraversalContext& InContext);
	class UMovieGraphVariable* AddVariable(class FName InCustomBaseName);
};

// 0x0 (0x28 - 0x28)
// Class MovieRenderPipelineCore.MovieGraphTimeStepBase
class UMovieGraphTimeStepBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMovieGraphTimeStepBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieRenderPipelineCore.MovieGraphRendererBase
class UMovieGraphRendererBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMovieGraphRendererBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieRenderPipelineCore.MovieGraphDataSourceBase
class UMovieGraphDataSourceBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMovieGraphDataSourceBase* GetDefaultObj();

};

// 0x188 (0x1B0 - 0x28)
// Class MovieRenderPipelineCore.MovieGraphDefaultRenderer
class UMovieGraphDefaultRenderer : public UMovieGraphRendererBase
{
public:
	TArray<class UMovieGraphRenderPassNode*>     RenderPassesInUse;                                 // 0x28(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EB7[0x178];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieGraphDefaultRenderer* GetDefaultObj();

};

// 0x10 (0xA0 - 0x90)
// Class MovieRenderPipelineCore.MovieGraphDeferredRenderPassNode
class UMovieGraphDeferredRenderPassNode : public UMovieGraphRenderPassNode
{
public:
	uint8                                        Pad_1EDB[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieGraphDeferredRenderPassNode* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MovieRenderPipelineCore.MovieGraphEdge
class UMovieGraphEdge : public UObject
{
public:
	class UMovieGraphPin*                        InputPin;                                          // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieGraphPin*                        OutputPin;                                         // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieGraphEdge* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class MovieRenderPipelineCore.MovieGraphFileOutputNode
class UMovieGraphFileOutputNode : public UMovieGraphSettingNode
{
public:

	static class UClass* StaticClass();
	static class UMovieGraphFileOutputNode* GetDefaultObj();

};

// 0x18 (0xA8 - 0x90)
// Class MovieRenderPipelineCore.MovieGraphGetCVarValueNode
class UMovieGraphGetCVarValueNode : public UMovieGraphSettingNode
{
public:
	uint8                                        bOverride_Name : 1;                                // Mask: 0x1, PropSize: 0x10x90(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_6D : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1F29[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieGraphGetCVarValueNode* GetDefaultObj();

};

// 0x30 (0xC0 - 0x90)
// Class MovieRenderPipelineCore.MovieGraphGlobalGameOverridesNode
class UMovieGraphGlobalGameOverridesNode : public UMovieGraphSettingNode
{
public:
	uint8                                        bOverride_GameModeOverride : 1;                    // Mask: 0x1, PropSize: 0x10x90(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_CinematicQualitySettings : 1;            // Mask: 0x2, PropSize: 0x10x90(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_TextureStreaming : 1;                    // Mask: 0x4, PropSize: 0x10x90(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_UseLODZero : 1;                          // Mask: 0x8, PropSize: 0x10x90(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_DisableHLODs : 1;                        // Mask: 0x10, PropSize: 0x10x90(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_UseHighQualityShadows : 1;               // Mask: 0x20, PropSize: 0x10x90(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ShadowDistanceScale : 1;                 // Mask: 0x40, PropSize: 0x10x90(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ShadowRadiusThreshold : 1;               // Mask: 0x80, PropSize: 0x10x90(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_OverrideViewDistanceScale : 1;           // Mask: 0x1, PropSize: 0x10x91(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ViewDistanceScale : 1;                   // Mask: 0x2, PropSize: 0x10x91(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_FlushGrassStreaming : 1;                 // Mask: 0x4, PropSize: 0x10x91(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_FlushStreamingManagers : 1;              // Mask: 0x8, PropSize: 0x10x91(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_VirtualTextureFeedbackFactor : 1;        // Mask: 0x10, PropSize: 0x10x91(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_DisableGPUTimeout : 1;                   // Mask: 0x20, PropSize: 0x10x91(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_6F : 2;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1F59[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AGameModeBase>             GameModeOverride;                                  // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCinematicQualitySettings;                         // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMoviePipelineTextureStreamingMethod TextureStreaming;                                  // 0xA1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLODZero;                                       // 0xA2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableHLODs;                                     // 0xA3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseHighQualityShadows;                            // 0xA4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F66[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ShadowDistanceScale;                               // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShadowRadiusThreshold;                             // 0xAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ViewDistanceScale;                                 // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlushGrassStreaming;                              // 0xB4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlushStreamingManagers;                           // 0xB5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F73[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        VirtualTextureFeedbackFactor;                      // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F75[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieGraphGlobalGameOverridesNode* GetDefaultObj();

};

// 0x20 (0xB0 - 0x90)
// Class MovieRenderPipelineCore.MovieGraphImageSequenceOutputNode
class UMovieGraphImageSequenceOutputNode : public UMovieGraphFileOutputNode
{
public:
	uint8                                        Pad_1F95[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieGraphImageSequenceOutputNode* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class MovieRenderPipelineCore.MovieGraphImageSequenceOutputNode_BMP
class UMovieGraphImageSequenceOutputNode_BMP : public UMovieGraphImageSequenceOutputNode
{
public:

	static class UClass* StaticClass();
	static class UMovieGraphImageSequenceOutputNode_BMP* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class MovieRenderPipelineCore.MovieGraphImageSequenceOutputNode_JPG
class UMovieGraphImageSequenceOutputNode_JPG : public UMovieGraphImageSequenceOutputNode
{
public:

	static class UClass* StaticClass();
	static class UMovieGraphImageSequenceOutputNode_JPG* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class MovieRenderPipelineCore.MovieGraphImageSequenceOutputNode_PNG
class UMovieGraphImageSequenceOutputNode_PNG : public UMovieGraphImageSequenceOutputNode
{
public:

	static class UClass* StaticClass();
	static class UMovieGraphImageSequenceOutputNode_PNG* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class MovieRenderPipelineCore.MovieGraphInputNode
class UMovieGraphInputNode : public UMovieGraphNode
{
public:

	static class UClass* StaticClass();
	static class UMovieGraphInputNode* GetDefaultObj();

};

// 0x118 (0x140 - 0x28)
// Class MovieRenderPipelineCore.MovieGraphLinearTimeStep
class UMovieGraphLinearTimeStep : public UMovieGraphTimeStepBase
{
public:
	struct FMovieGraphTimeStepData               CurrentTimeStepData;                               // 0x28(0x20)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_203F[0xE8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieGraphEngineTimeStep*             CustomTimeStep;                                    // 0x130(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEngineCustomTimeStep*                 PrevCustomTimeStep;                                // 0x138(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMovieGraphLinearTimeStep* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MovieRenderPipelineCore.MovieGraphEngineTimeStep
class UMovieGraphEngineTimeStep : public UEngineCustomTimeStep
{
public:
	uint8                                        Pad_2057[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieGraphEngineTimeStep* GetDefaultObj();

};

// 0x30 (0xC0 - 0x90)
// Class MovieRenderPipelineCore.MovieGraphModifierNode
class UMovieGraphModifierNode : public UMovieGraphSettingNode
{
public:
	uint8                                        bOverride_ModifierName : 1;                        // Mask: 0x1, PropSize: 0x10x90(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ModifiedCollectionName : 1;              // Mask: 0x2, PropSize: 0x10x90(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ModifierClass : 1;                       // Mask: 0x4, PropSize: 0x10x90(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_74 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2077[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ModifierName;                                      // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ModifiedCollectionName;                            // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMoviePipelineCollectionModifier*      ModifierClass;                                     // 0xB8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieGraphModifierNode* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class MovieRenderPipelineCore.MovieGraphOutputNode
class UMovieGraphOutputNode : public UMovieGraphNode
{
public:

	static class UClass* StaticClass();
	static class UMovieGraphOutputNode* GetDefaultObj();

};

// 0x48 (0xD8 - 0x90)
// Class MovieRenderPipelineCore.MovieGraphOutputSettingNode
class UMovieGraphOutputSettingNode : public UMovieGraphSettingNode
{
public:
	uint8                                        bOverride_OutputDirectory : 1;                     // Mask: 0x1, PropSize: 0x10x90(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_FileNameFormat : 1;                      // Mask: 0x2, PropSize: 0x10x90(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_OutputResolution : 1;                    // Mask: 0x4, PropSize: 0x10x90(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_OutputFrameRate : 1;                     // Mask: 0x8, PropSize: 0x10x90(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_bOverwriteExistingOutput : 1;            // Mask: 0x10, PropSize: 0x10x90(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ZeroPadFrameNumbers : 1;                 // Mask: 0x20, PropSize: 0x10x90(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_FrameNumberOffset : 1;                   // Mask: 0x40, PropSize: 0x10x90(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_75 : 1;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_20C8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDirectoryPath                        OutputDirectory;                                   // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FileNameFormat;                                    // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                             OutputResolution;                                  // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                            OutputFrameRate;                                   // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverwriteExistingOutput;                          // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20DD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ZeroPadFrameNumbers;                               // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameNumberOffset;                                 // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20E2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieGraphOutputSettingNode* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class MovieRenderPipelineCore.MovieGraphPin
class UMovieGraphPin : public UObject
{
public:
	class UMovieGraphNode*                       Node;                                              // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieGraphPinProperties              Properties;                                        // 0x30(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_210F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieGraphEdge*>               Edges;                                             // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, TextExportTransient, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieGraphPin* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineBase
class UMoviePipelineBase : public UObject
{
public:
	uint8                                        Pad_2195[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineBase* GetDefaultObj();

	void Shutdown(bool bIsError);
	void RequestShutdown(bool bIsError);
	bool IsShutdownRequested();
	enum class EMovieRenderPipelineState GetPipelineState();
};

// 0xD8 (0x130 - 0x58)
// Class MovieRenderPipelineCore.MovieGraphPipeline
class UMovieGraphPipeline : public UMoviePipelineBase
{
public:
	class UMovieGraphTimeStepBase*               GraphTimeStepInstance;                             // 0x58(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMovieGraphRendererBase*               GraphRendererInstance;                             // 0x60(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMovieGraphDataSourceBase*             GraphDataSourceInstance;                           // 0x68(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMoviePipelineExecutorJob*             CurrentJob;                                        // 0x70(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMoviePipelineExecutorShot*>    ActiveShotList;                                    // 0x78(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TSet<class UMovieGraphFileOutputNode*>       OutputNodesDataSentTo;                             // 0x88(0x50)(Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_2242[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieGraphPipeline* GetDefaultObj();

	void SetInitializationTime(struct FDateTime& InDateTime);
	void OnMoviePipelineFinishedImpl();
	void Initialize(class UMoviePipelineExecutorJob* InJob, struct FMovieGraphInitConfig& InitConfig);
	struct FDateTime GetInitializationTime();
	class UMoviePipelineExecutorJob* GetCurrentJob();
};

// 0x0 (0x90 - 0x90)
// Class MovieRenderPipelineCore.MovieGraphPathTracedRendererNode
class UMovieGraphPathTracedRendererNode : public UMovieGraphSettingNode
{
public:

	static class UClass* StaticClass();
	static class UMovieGraphPathTracedRendererNode* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class MovieRenderPipelineCore.MovieGraphEXRSequenceNode
class UMovieGraphEXRSequenceNode : public UMovieGraphSettingNode
{
public:

	static class UClass* StaticClass();
	static class UMovieGraphEXRSequenceNode* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class MovieRenderPipelineCore.MovieGraphAntiAliasingNode
class UMovieGraphAntiAliasingNode : public UMovieGraphSettingNode
{
public:

	static class UClass* StaticClass();
	static class UMovieGraphAntiAliasingNode* GetDefaultObj();

};

// 0x18 (0xA8 - 0x90)
// Class MovieRenderPipelineCore.MovieGraphRenderLayerNode
class UMovieGraphRenderLayerNode : public UMovieGraphSettingNode
{
public:
	uint8                                        bOverride_LayerName : 1;                           // Mask: 0x1, PropSize: 0x10x90(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_77 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2289[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LayerName;                                         // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieGraphRenderLayerNode* GetDefaultObj();

};

// 0x30 (0xC0 - 0x90)
// Class MovieRenderPipelineCore.MovieGraphSelectNode
class UMovieGraphSelectNode : public UMovieGraphNode
{
public:
	TArray<class FString>                        SelectOptions;                                     // 0x90(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                SelectedOption;                                    // 0xA0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0xB0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieGraphSelectNode* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class MovieRenderPipelineCore.MovieGraphSequenceDataSource
class UMovieGraphSequenceDataSource : public UMovieGraphDataSourceBase
{
public:
	class ALevelSequenceActor*                   LevelSequenceActor;                                // 0x28(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_22C8[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieGraphSequenceDataSource* GetDefaultObj();

};

// 0x28 (0xB8 - 0x90)
// Class MovieRenderPipelineCore.MovieGraphSetCVarValueNode
class UMovieGraphSetCVarValueNode : public UMovieGraphSettingNode
{
public:
	uint8                                        bOverride_Name : 1;                                // Mask: 0x1, PropSize: 0x10x90(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_Value : 1;                               // Mask: 0x2, PropSize: 0x10x90(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_78 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_22E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieGraphSetCVarValueNode* GetDefaultObj();

};

// 0x28 (0xB8 - 0x90)
// Class MovieRenderPipelineCore.MovieGraphSubgraphNode
class UMovieGraphSubgraphNode : public UMovieGraphNode
{
public:
	TSoftObjectPtr<class UMovieGraphConfig>      SubgraphAsset;                                     // 0x90(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieGraphSubgraphNode* GetDefaultObj();

	void SetSubGraphAsset(TSoftObjectPtr<class UMovieGraphConfig>& InSubgraphAsset);
	class UMovieGraphConfig* GetSubgraphAsset();
};

// 0x18 (0xA8 - 0x90)
// Class MovieRenderPipelineCore.MovieGraphVariableNode
class UMovieGraphVariableNode : public UMovieGraphNode
{
public:
	class UMovieGraphVariable*                   GraphVariable;                                     // 0x90(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieGraphPinProperties              OutputPin;                                         // 0x98(0xC)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2378[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieGraphVariableNode* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class MovieRenderPipelineCore.MovieJobVariableAssignmentContainer
class UMovieJobVariableAssignmentContainer : public UObject
{
public:
	struct FInstancedPropertyBag                 Value;                                             // 0x28(0x10)(Edit, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UMovieGraphConfig>      GraphPreset;                                       // 0x38(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieJobVariableAssignmentContainer* GetDefaultObj();

	bool SetVariableAssignmentEnableState(class UMovieGraphVariable* InGraphVariable, bool bIsEnabled);
	bool SetValueText(class FName& PropertyName, class FText& InValue);
	bool SetValueString(class FName& PropertyName, const class FString& InValue);
	bool SetValueSerializedString(class FName& PropertyName, const class FString& NewValue);
	bool SetValueObject(class FName& PropertyName, class UObject* InValue);
	bool SetValueName(class FName& PropertyName, class FName InValue);
	bool SetValueInt64(class FName& PropertyName, int64 InValue);
	bool SetValueInt32(class FName& PropertyName, int32 InValue);
	bool SetValueFloat(class FName& PropertyName, float InValue);
	bool SetValueEnum(class FName& PropertyName, uint8 InValue, class UEnum* Enum);
	bool SetValueDouble(class FName& PropertyName, double InValue);
	bool SetValueClass(class FName& PropertyName, class UClass* InValue);
	bool SetValueByte(class FName& PropertyName, uint8 InValue);
	bool SetValueBool(class FName& PropertyName, bool bInValue);
	void SetGraphConfig(TSoftObjectPtr<class UMovieGraphConfig>& InGraphConfig);
	bool GetVariableAssignmentEnableState(class UMovieGraphVariable* InGraphVariable, bool* bOutIsEnabled);
	class UObject* GetValueTypeObject(class FName& PropertyName);
	enum class EMovieGraphValueType GetValueType(class FName& PropertyName);
	bool GetValueText(class FName& PropertyName, class FText* OutValue);
	bool GetValueString(class FName& PropertyName, class FString* OutValue);
	class FString GetValueSerializedString(class FName& PropertyName);
	bool GetValueObject(class FName& PropertyName, class UObject* OutValue, class UClass* RequestedClass);
	bool GetValueName(class FName& PropertyName, class FName* OutValue);
	bool GetValueInt64(class FName& PropertyName, int64* OutValue);
	bool GetValueInt32(class FName& PropertyName, int32* OutValue);
	bool GetValueFloat(class FName& PropertyName, float* OutValue);
	bool GetValueEnum(class FName& PropertyName, uint8* OutValue, class UEnum* RequestedEnum);
	bool GetValueDouble(class FName& PropertyName, double* OutValue);
	enum class EMovieGraphContainerType GetValueContainerType(class FName& PropertyName);
	bool GetValueClass(class FName& PropertyName, class UClass* OutValue);
	bool GetValueByte(class FName& PropertyName, uint8* OutValue);
	bool GetValueBool(class FName& PropertyName, bool* bOutValue);
};

// 0x20 (0x48 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineSetting
class UMoviePipelineSetting : public UObject
{
public:
	TWeakObjectPtr<class UMoviePipeline>         CachedPipeline;                                    // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bEnabled;                                          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2903[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineSetting* GetDefaultObj();

	void SetIsEnabled(bool bInEnabled);
	bool IsEnabled();
	void BuildNewProcessCommandLineArgs(TArray<class FString>& InOutUnrealURLParams, TArray<class FString>& InOutCommandLineArgs, TArray<class FString>& InOutDeviceProfileCvars, TArray<class FString>& InOutExecCmds);
	void BuildNewProcessCommandLine(class FString& InOutUnrealURLParams, class FString& InOutCommandLineArgs);
};

// 0x10 (0x58 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineCameraSetting
class UMoviePipelineCameraSetting : public UMoviePipelineSetting
{
public:
	enum class EMoviePipelineShutterTiming       ShutterTiming;                                     // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2934[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OverscanPercentage;                                // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRenderAllCameras;                                 // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_293A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineCameraSetting* GetDefaultObj();

};

// 0x0 (0x340 - 0x340)
// Class MovieRenderPipelineCore.MoviePipelineGameMode
class AMoviePipelineGameMode : public AGameModeBase
{
public:

	static class UClass* StaticClass();
	static class AMoviePipelineGameMode* GetDefaultObj();

};

// 0x20 (0x68 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineHighResSetting
class UMoviePipelineHighResSetting : public UMoviePipelineSetting
{
public:
	int32                                        TileCount;                                         // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TextureSharpnessBias;                              // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverlapRatio;                                      // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideSubSurfaceScattering;                     // 0x54(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2998[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BurleySampleCount;                                 // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllocateHistoryPerTile;                           // 0x5C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29A2[0xB];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineHighResSetting* GetDefaultObj();

};

// 0x30 (0x68 - 0x38)
// Class MovieRenderPipelineCore.MoviePipelineInProcessExecutorSettings
class UMoviePipelineInProcessExecutorSettings : public UDeveloperSettings
{
public:
	bool                                         bCloseEditor;                                      // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29CD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AdditionalCommandLineArguments;                    // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InheritedCommandLineArguments;                     // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InitialDelayFrameCount;                            // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29D6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineInProcessExecutorSettings* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineOutputBase
class UMoviePipelineOutputBase : public UMoviePipelineSetting
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineOutputBase* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineCollection
class UMoviePipelineCollection : public UObject
{
public:
	class FString                                CollectionName;                                    // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMoviePipelineCollectionQuery*> Queries;                                           // 0x38(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMoviePipelineCollection* GetDefaultObj();

	void SetCollectionName(const class FString& InName);
	TArray<class AActor*> GetMatchingActors(class UWorld* World, bool bInvertResult);
	class FString GetCollectionName();
	void AddQuery(class UMoviePipelineCollectionQuery* Query);
};

// 0x18 (0x40 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineCollectionModifier
class UMoviePipelineCollectionModifier : public UObject
{
public:
	TArray<class UMoviePipelineCollection*>      Collections;                                       // 0x28(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                         bUseInvertedActors;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2BA6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineCollectionModifier* GetDefaultObj();

	void SetIsInverted(bool bIsInverted);
	void SetCollections(const TArray<class UMoviePipelineCollection*>& InCollections);
	bool IsInverted();
	TArray<class UMoviePipelineCollection*> GetCollections();
	void AddCollection(class UMoviePipelineCollection* Collection);
};

// 0x78 (0xB8 - 0x40)
// Class MovieRenderPipelineCore.MoviePipelineMaterialModifier
class UMoviePipelineMaterialModifier : public UMoviePipelineCollectionModifier
{
public:
	uint8                                        Pad_2CC8[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UMaterialInterface>     MaterialToApply;                                   // 0x90(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMoviePipelineMaterialModifier* GetDefaultObj();

	void UndoModifier();
	void SetMaterial(TSoftObjectPtr<class UMaterialInterface> InMaterial);
	void ApplyModifier(class UWorld* World);
};

// 0x58 (0x98 - 0x40)
// Class MovieRenderPipelineCore.MoviePipelineVisibilityModifier
class UMoviePipelineVisibilityModifier : public UMoviePipelineCollectionModifier
{
public:
	TMap<TSoftObjectPtr<class AActor>, bool>     ModifiedActors;                                    // 0x40(0x50)(Transient, NativeAccessSpecifierPrivate)
	bool                                         bIsHidden;                                         // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D64[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineVisibilityModifier* GetDefaultObj();

	void UndoModifier();
	void SetHidden(bool bInIsHidden);
	bool IsHidden();
	void ApplyModifier(class UWorld* World);
};

// 0x0 (0x28 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineCollectionQuery
class UMoviePipelineCollectionQuery : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineCollectionQuery* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineCollectionCommonQuery
class UMoviePipelineCollectionCommonQuery : public UMoviePipelineCollectionQuery
{
public:
	TArray<TSubclassOf<class UObject>>           ComponentTypes;                                    // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	enum class EMoviePipelineCollectionCommonQueryMode QueryMode;                                         // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E4E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        ActorNames;                                        // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          Tags;                                              // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMoviePipelineCollectionCommonQuery* GetDefaultObj();

	void SetTags(TArray<class FName>& InTags);
	void SetQueryMode(enum class EMoviePipelineCollectionCommonQueryMode InQueryMode);
	void SetComponentTypes(const TArray<class UClass*>& InComponentTypes);
	void SetActorNames(TArray<class FString>& InActorNames);
	bool DoesActorMatchQuery(class AActor* Actor);
};

// 0x20 (0x48 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineRenderLayer
class UMoviePipelineRenderLayer : public UObject
{
public:
	class FString                                RenderLayerName;                                   // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMoviePipelineCollectionModifier*> Modifiers;                                         // 0x38(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMoviePipelineRenderLayer* GetDefaultObj();

	void UndoPreview(class UWorld* World);
	void SetRenderLayerName(const class FString& NewName);
	void RemoveModifier(class UMoviePipelineCollectionModifier* Modifier);
	void Preview(class UWorld* World);
	class FString GetRenderLayerName();
	TArray<class UMoviePipelineCollectionModifier*> GetModifiers();
	class UMoviePipelineCollection* GetCollectionByName(const class FString& Name);
	void AddModifier(class UMoviePipelineCollectionModifier* Modifier);
};

// 0x48 (0x78 - 0x30)
// Class MovieRenderPipelineCore.MoviePipelineRenderLayerSubsystem
class UMoviePipelineRenderLayerSubsystem : public UWorldSubsystem
{
public:
	TArray<class UMoviePipelineRenderLayer*>     RenderLayers;                                      // 0x30(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UMoviePipelineRenderLayer*             ActiveRenderLayer;                                 // 0x40(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMoviePipelineCollection*              ActiveCollection;                                  // 0x48(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMoviePipelineCollectionModifier*      ActiveModifier;                                    // 0x50(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMoviePipelineRenderLayer*             VisualizationRenderLayer;                          // 0x58(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMoviePipelineCollection*              VisualizationEmptyCollection;                      // 0x60(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMoviePipelineVisibilityModifier*      VisualizationModifier_HideWorld;                   // 0x68(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMoviePipelineVisibilityModifier*      VisualizationModifier_VisibleCollections;          // 0x70(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMoviePipelineRenderLayerSubsystem* GetDefaultObj();

	void SetActiveRenderLayerByObj(class UMoviePipelineRenderLayer* RenderLayer);
	void SetActiveRenderLayerByName(const class FString& RenderLayerName);
	void Reset();
	void RemoveRenderLayer(const class FString& RenderLayerName);
	void PreviewModifier(class UMoviePipelineCollectionModifier* Modifier);
	void PreviewCollection(class UMoviePipelineCollection* Collection);
	TArray<class UMoviePipelineRenderLayer*> GetRenderLayers();
	class UMoviePipelineRenderLayerSubsystem* GetFromWorld(class UWorld* World);
	class UMoviePipelineRenderLayer* GetActiveRenderLayer();
	void ClearModifierPreview();
	void ClearCollectionPreview();
	void ClearActiveRenderLayer();
	bool AddRenderLayer(class UMoviePipelineRenderLayer* RenderLayer);
};

// 0x20 (0x68 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase
class UMoviePipelineSetting_BlueprintBase : public UMoviePipelineSetting
{
public:
	class FText                                  CategoryText;                                      // 0x48(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                         bIsValidOnPrimary;                                 // 0x60(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsValidOnShots;                                   // 0x61(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanBeDisabled;                                    // 0x62(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3124[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineSetting_BlueprintBase* GetDefaultObj();

	void ReceiveTeardownForPipelineImpl(class UMoviePipeline* InPipeline);
	void ReceiveSetupForPipelineImpl(class UMoviePipeline* InPipeline);
	struct FMoviePipelineFormatArgs ReceiveGetFormatArguments(struct FMoviePipelineFormatArgs& InOutFormatArgs);
	void OnEngineTickBeginFrame();
};

// 0x0 (0x48 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineViewFamilySetting
class UMoviePipelineViewFamilySetting : public UMoviePipelineSetting
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineViewFamilySetting* GetDefaultObj();

};

// 0x0 (0x2C0 - 0x2C0)
// Class MovieRenderPipelineCore.MovieRenderDebugWidget
class UMovieRenderDebugWidget : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UMovieRenderDebugWidget* GetDefaultObj();

	void OnInitializedForPipeline(class UMoviePipeline* ForPipeline);
};

// 0x3C0 (0x418 - 0x58)
// Class MovieRenderPipelineCore.MoviePipeline
class UMoviePipeline : public UMoviePipelineBase
{
public:
	FMulticastInlineDelegateProperty_            OnMoviePipelineFinishedDelegate;                   // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMoviePipelineWorkFinishedDelegate;               // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMoviePipelineShotWorkFinishedDelegate;           // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UMoviePipelineCustomTimeStep*          CustomTimeStep;                                    // 0x88(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3211[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UEngineCustomTimeStep*                 CachedPrevCustomTimeStep;                          // 0xA0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULevelSequence*                        TargetSequence;                                    // 0xA8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ALevelSequenceActor*                   LevelSequenceActor;                                // 0xB0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMovieRenderDebugWidget*               DebugWidget;                                       // 0xB8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTexture*                              PreviewTexture;                                    // 0xC0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3226[0x258];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UMovieRenderDebugWidget>   DebugWidgetClass;                                  // 0x320(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3229[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMoviePipelineExecutorJob*             CurrentJob;                                        // 0x330(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_322F[0xE0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipeline* GetDefaultObj();

	void SetInitializationTime(struct FDateTime& InDateTime);
	void OnMoviePipelineFinishedImpl();
	void Initialize(class UMoviePipelineExecutorJob* InJob);
	class UTexture* GetPreviewTexture();
	class UMoviePipelinePrimaryConfig* GetPipelinePrimaryConfig();
	class UMoviePipelinePrimaryConfig* GetPipelineMasterConfig();
	struct FDateTime GetInitializationTime();
	class UMoviePipelineExecutorJob* GetCurrentJob();
};

// 0x10 (0x38 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineCustomTimeStep
class UMoviePipelineCustomTimeStep : public UEngineCustomTimeStep
{
public:
	uint8                                        Pad_3252[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineCustomTimeStep* GetDefaultObj();

};

// 0x20 (0x68 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineAntiAliasingSetting
class UMoviePipelineAntiAliasingSetting : public UMoviePipelineSetting
{
public:
	int32                                        SpatialSampleCount;                                // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TemporalSampleCount;                               // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideAntiAliasing;                             // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAntiAliasingMethod               AntiAliasingMethod;                                // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3273[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RenderWarmUpCount;                                 // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCameraCutForWarmUp;                            // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3276[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EngineWarmUpCount;                                 // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRenderWarmUpFrames;                               // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_327D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineAntiAliasingSetting* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineBlueprintLibrary
class UMoviePipelineBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineBlueprintLibrary* GetDefaultObj();

	void UpdateJobShotListFromSequence(class ULevelSequence* InSequence, class UMoviePipelineExecutorJob* InJob, bool* bShotsChanged);
	int32 ResolveVersionNumber(const struct FMoviePipelineFilenameResolveParams& InParams, bool bGetNextVersion);
	void ResolveFilenameFormatArguments(const class FString& InFormatString, struct FMoviePipelineFilenameResolveParams& InParams, class FString* OutFinalPath, struct FMoviePipelineFormatArgs* OutMergedFormatArgs);
	class UMoviePipelineQueue* LoadManifestFileFromString(const class FString& InManifestFilePath);
	struct FTimecode GetRootTimecode(class UMoviePipeline* InMoviePipeline);
	struct FFrameNumber GetRootFrameNumber(class UMoviePipeline* InMoviePipeline);
	enum class EMovieRenderPipelineState GetPipelineState(class UMoviePipeline* InPipeline);
	void GetOverallSegmentCounts(class UMoviePipeline* InMoviePipeline, int32* OutCurrentIndex, int32* OutTotalCount);
	void GetOverallOutputFrames(class UMoviePipeline* InMoviePipeline, int32* OutCurrentIndex, int32* OutTotalCount);
	class FText GetMoviePipelineEngineChangelistLabel(class UMoviePipeline* InMoviePipeline);
	struct FTimecode GetMasterTimecode(class UMoviePipeline* InMoviePipeline);
	struct FFrameNumber GetMasterFrameNumber(class UMoviePipeline* InMoviePipeline);
	class FString GetMapPackageName(class UMoviePipelineExecutorJob* InJob);
	class FText GetJobName(class UMoviePipeline* InMoviePipeline);
	struct FDateTime GetJobInitializationTime(class UMoviePipeline* InMoviePipeline);
	class FText GetJobAuthor(class UMoviePipeline* InMoviePipeline);
	bool GetEstimatedTimeRemaining(class UMoviePipeline* InPipeline, struct FTimespan* OutEstimate);
	struct FIntPoint GetEffectiveOutputResolution(class UMoviePipelinePrimaryConfig* InPrimaryConfig, class UMoviePipelineExecutorShot* InPipelineExecutorShot);
	struct FTimecode GetCurrentShotTimecode(class UMoviePipeline* InMoviePipeline);
	struct FFrameNumber GetCurrentShotFrameNumber(class UMoviePipeline* InMoviePipeline);
	class ULevelSequence* GetCurrentSequence(class UMoviePipeline* InMoviePipeline);
	struct FMoviePipelineSegmentWorkMetrics GetCurrentSegmentWorkMetrics(class UMoviePipeline* InMoviePipeline);
	enum class EMovieRenderShotState GetCurrentSegmentState(class UMoviePipeline* InMoviePipeline);
	void GetCurrentSegmentName(class UMoviePipeline* InMoviePipeline, class FText* OutOuterName, class FText* OutInnerName);
	float GetCurrentFocusDistance(class UMoviePipeline* InMoviePipeline);
	float GetCurrentFocalLength(class UMoviePipeline* InMoviePipeline);
	class UMoviePipelineExecutorShot* GetCurrentExecutorShot(class UMoviePipeline* InMoviePipeline);
	float GetCurrentAperture(class UMoviePipeline* InMoviePipeline);
	float GetCompletionPercentage(class UMoviePipeline* InPipeline);
	class UMoviePipelineSetting* FindOrGetDefaultSettingForShot(TSubclassOf<class UMoviePipelineSetting> InSettingType, class UMoviePipelinePrimaryConfig* InPrimaryConfig, class UMoviePipelineExecutorShot* InShot);
	class UMovieSceneSequence* DuplicateSequence(class UObject* Outer, class UMovieSceneSequence* InSequence);
};

// 0xA8 (0xF0 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineColorSetting
class UMoviePipelineColorSetting : public UMoviePipelineSetting
{
public:
	struct FOpenColorIODisplayConfiguration      OCIOConfiguration;                                 // 0x48(0xA0)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                         bDisableToneCurve;                                 // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3568[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineColorSetting* GetDefaultObj();

};

// 0x40 (0x88 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoder
class UMoviePipelineCommandLineEncoder : public UMoviePipelineSetting
{
public:
	class FString                                FileNameFormatOverride;                            // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMoviePipelineEncodeQuality       Quality;                                           // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_357C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AdditionalCommandLineArgs;                         // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeleteSourceFiles;                                // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipEncodeOnRenderCanceled;                       // 0x71(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWriteEachFrameDuration;                           // 0x72(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3580[0x15];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineCommandLineEncoder* GetDefaultObj();

};

// 0xC8 (0x100 - 0x38)
// Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoderSettings
class UMoviePipelineCommandLineEncoderSettings : public UDeveloperSettings
{
public:
	class FString                                ExecutablePath;                                    // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CodecHelpText;                                     // 0x48(0x18)(Edit, NativeAccessSpecifierPublic)
	class FString                                VideoCodec;                                        // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AudioCodec;                                        // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputFileExtension;                               // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CommandLineFormat;                                 // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VideoInputStringFormat;                            // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AudioInputStringFormat;                            // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EncodeSettings_Low;                                // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EncodeSettings_Med;                                // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EncodeSettings_High;                               // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EncodeSettings_Epic;                               // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMoviePipelineCommandLineEncoderSettings* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineConfigBase
class UMoviePipelineConfigBase : public UObject
{
public:
	class FString                                DisplayName;                                       // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMoviePipelineSetting*>         Settings;                                          // 0x38(0x10)(Edit, ExportObject, ZeroConstructor, EditConst, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UMoviePipelineConfigBase> ConfigOrigin;                                      // 0x48(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_368B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineConfigBase* GetDefaultObj();

	void SetConfigOrigin(class UMoviePipelineConfigBase* InConfig);
	void RemoveSetting(class UMoviePipelineSetting* InSetting);
	TArray<class UMoviePipelineSetting*> GetUserSettings();
	class UMoviePipelineConfigBase* GetConfigOrigin();
	TArray<class UMoviePipelineSetting*> FindSettingsByClass(TSubclassOf<class UMoviePipelineSetting> InClass, bool bIncludeDisabledSettings, bool bExactMatch);
	class UMoviePipelineSetting* FindSettingByClass(TSubclassOf<class UMoviePipelineSetting> InClass, bool bIncludeDisabledSettings, bool bExactMatch);
	class UMoviePipelineSetting* FindOrAddSettingByClass(TSubclassOf<class UMoviePipelineSetting> InClass, bool bIncludeDisabledSettings, bool bExactMatch);
	void CopyFrom(class UMoviePipelineConfigBase* InConfig);
};

// 0x10 (0x58 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineDebugSettings
class UMoviePipelineDebugSettings : public UMoviePipelineSetting
{
public:
	bool                                         bWriteAllSamples;                                  // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCaptureFramesWithRenderDoc;                       // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36A2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CaptureFrame;                                      // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCaptureUnrealInsightsTrace;                       // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36A3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineDebugSettings* GetDefaultObj();

};

// 0xF0 (0x118 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineExecutorBase
class UMoviePipelineExecutorBase : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnExecutorFinishedDelegate;                        // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37A6[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnExecutorErroredDelegate;                         // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37A9[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            SocketMessageRecievedDelegate;                     // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            HTTPResponseRecievedDelegate;                      // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UMovieRenderDebugWidget>   DebugWidgetClass;                                  // 0xA0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37AF[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                UserData;                                          // 0xB8(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMoviePipeline>            TargetPipelineClass;                               // 0xC8(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_37B2[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineExecutorBase* GetDefaultObj();

	void SetStatusProgress(float InProgress);
	void SetStatusMessage(const class FString& InStatus);
	void SetMoviePipelineClass(class UClass* InPipelineClass);
	bool SendSocketMessage(const class FString& InMessage);
	int32 SendHTTPRequest(const class FString& InURL, const class FString& InVerb, const class FString& InMessage, TMap<class FString, class FString>& InHeaders);
	void OnExecutorFinishedImpl();
	void OnExecutorErroredImpl(class UMoviePipeline* ErroredPipeline, bool bFatal, class FText ErrorReason);
	void OnBeginFrame();
	bool IsSocketConnected();
	bool IsRendering();
	float GetStatusProgress();
	class FString GetStatusMessage();
	void Execute(class UMoviePipelineQueue* InPipelineQueue);
	void DisconnectSocket();
	bool ConnectSocket(const class FString& InHostName, int32 InPort);
	void CancelCurrentJob();
	void CancelAllJobs();
};

// 0x38 (0x80 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineFCPXMLExporter
class UMoviePipelineFCPXMLExporter : public UMoviePipelineOutputBase
{
public:
	uint8                                        Pad_37D5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                FileNameFormatOverride;                            // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFCPXMLExportDataSource           DataSource;                                        // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37D8[0x1F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineFCPXMLExporter* GetDefaultObj();

};

// 0xE8 (0x130 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineGameOverrideSetting
class UMoviePipelineGameOverrideSetting : public UMoviePipelineSetting
{
public:
	TSubclassOf<class AGameModeBase>             GameModeOverride;                                  // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCinematicQualitySettings;                         // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMoviePipelineTextureStreamingMethod TextureStreaming;                                  // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLODZero;                                       // 0x52(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableHLODs;                                     // 0x53(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseHighQualityShadows;                            // 0x54(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ShadowDistanceScale;                               // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShadowRadiusThreshold;                             // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideViewDistanceScale;                        // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37EE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ViewDistanceScale;                                 // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlushGrassStreaming;                              // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlushStreamingManagers;                           // 0x69(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideVirtualTextureFeedbackFactor;             // 0x6A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37F0[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        VirtualTextureFeedbackFactor;                      // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37F2[0xC0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineGameOverrideSetting* GetDefaultObj();

};

// 0x28 (0x140 - 0x118)
// Class MovieRenderPipelineCore.MoviePipelineLinearExecutorBase
class UMoviePipelineLinearExecutorBase : public UMoviePipelineExecutorBase
{
public:
	class UMoviePipelineQueue*                   Queue;                                             // 0x118(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMoviePipelineBase*                    ActiveMoviePipeline;                               // 0x120(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3800[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineLinearExecutorBase* GetDefaultObj();

};

// 0x50 (0x190 - 0x140)
// Class MovieRenderPipelineCore.MoviePipelineInProcessExecutor
class UMoviePipelineInProcessExecutor : public UMoviePipelineLinearExecutorBase
{
public:
	bool                                         bUseCurrentLevel;                                  // 0x140(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3812[0x4F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineInProcessExecutor* GetDefaultObj();

};

// 0x68 (0xB0 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineOutputSetting
class UMoviePipelineOutputSetting : public UMoviePipelineSetting
{
public:
	struct FDirectoryPath                        OutputDirectory;                                   // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FileNameFormat;                                    // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                             OutputResolution;                                  // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCustomFrameRate;                               // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_382D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameRate                            OutputFrameRate;                                   // 0x74(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3830[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bOverrideExistingOutput;                           // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3831[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HandleFrameCount;                                  // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutputFrameStep;                                   // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCustomPlaybackRange;                           // 0x8C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_383A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CustomStartFrame;                                  // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CustomEndFrame;                                    // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VersionNumber;                                     // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoVersion;                                      // 0x9C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_383E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ZeroPadFrameNumbers;                               // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameNumberOffset;                                 // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlushDiskWritesPerShot;                           // 0xA8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3844[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineOutputSetting* GetDefaultObj();

};

// 0x68 (0xE0 - 0x78)
// Class MovieRenderPipelineCore.MoviePipelinePrimaryConfig
class UMoviePipelinePrimaryConfig : public UMoviePipelineConfigBase
{
public:
	TMap<class FString, class UMoviePipelineShotConfig*> PerShotConfigMapping;                              // 0x78(0x50)(ExportObject, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	class UMoviePipelineOutputSetting*           OutputSetting;                                     // 0xC8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMoviePipelineSetting*>         TransientSettings;                                 // 0xD0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMoviePipelinePrimaryConfig* GetDefaultObj();

	void InitializeTransientSettings();
	TArray<class UMoviePipelineSetting*> GetTransientSettings();
	struct FFrameRate GetEffectiveFrameRate(class ULevelSequence* InSequence);
	TArray<class UMoviePipelineSetting*> GetAllSettings(bool bIncludeDisabledSettings, bool bIncludeTransientSettings);
};

// 0x18 (0x130 - 0x118)
// Class MovieRenderPipelineCore.MoviePipelinePythonHostExecutor
class UMoviePipelinePythonHostExecutor : public UMoviePipelineExecutorBase
{
public:
	TSubclassOf<class UMoviePipelinePythonHostExecutor> ExecutorClass;                                     // 0x118(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMoviePipelineQueue*                   PipelineQueue;                                     // 0x120(0x8)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWorld*                                LastLoadedWorld;                                   // 0x128(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMoviePipelinePythonHostExecutor* GetDefaultObj();

	void OnMapLoad(class UWorld* InWorld);
	class UWorld* GetLastLoadedWorld();
	void ExecuteDelayed(class UMoviePipelineQueue* InPipelineQueue);
};

// 0x168 (0x190 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineExecutorShot
class UMoviePipelineExecutorShot : public UObject
{
public:
	bool                                         bEnabled;                                          // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_399F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OuterName;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InnerName;                                         // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMoviePipelineSidecarCamera>   SidecarCameras;                                    // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UMovieJobVariableAssignmentContainer*  VariableAssignments;                               // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39A7[0xB0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Progress;                                          // 0x118(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_39A9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                StatusMessage;                                     // 0x120(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMoviePipelineShotConfig*              ShotOverrideConfig;                                // 0x130(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UMoviePipelineShotConfig> ShotOverridePresetOrigin;                          // 0x138(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMovieGraphConfig*                     GraphConfig;                                       // 0x160(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UMovieGraphConfig>      GraphPreset;                                       // 0x168(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMoviePipelineExecutorShot* GetDefaultObj();

	bool ShouldRender();
	void SetStatusProgress(float InProgress);
	void SetStatusMessage(const class FString& InStatus);
	void SetShotOverridePresetOrigin(class UMoviePipelineShotConfig* InPreset);
	void SetShotOverrideConfiguration(class UMoviePipelineShotConfig* InPreset);
	void SetGraphPreset(class UMovieGraphConfig* InGraphPreset);
	void SetGraphConfig(class UMovieGraphConfig* InGraphConfig);
	bool IsUsingGraphConfiguration();
	float GetStatusProgress();
	class FString GetStatusMessage();
	class UMoviePipelineShotConfig* GetShotOverridePresetOrigin();
	class UMoviePipelineShotConfig* GetShotOverrideConfiguration();
	class UMovieGraphConfig* GetGraphPreset();
	class UMovieGraphConfig* GetGraphConfig();
	class FString GetCameraName(int32 InCameraIndex);
	class UMoviePipelineShotConfig* AllocateNewShotOverrideConfig(TSubclassOf<class UMoviePipelineShotConfig> InConfigType);
};

// 0x118 (0x140 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineExecutorJob
class UMoviePipelineExecutorJob : public UObject
{
public:
	class FString                                JobName;                                           // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       Sequence;                                          // 0x38(0x20)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       Map;                                               // 0x58(0x20)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Author;                                            // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Comment;                                           // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMoviePipelineExecutorShot*>    ShotInfo;                                          // 0x98(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	class FString                                UserData;                                          // 0xA8(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieJobVariableAssignmentContainer*  VariableAssignments;                               // 0xB8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StatusMessage;                                     // 0xC0(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StatusProgress;                                    // 0xD0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsConsumed;                                       // 0xD4(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3AFC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMoviePipelinePrimaryConfig*           Configuration;                                     // 0xD8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UMoviePipelinePrimaryConfig> PresetOrigin;                                      // 0xE0(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bEnabled;                                          // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3B03[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieGraphConfig*                     GraphConfig;                                       // 0x110(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UMovieGraphConfig>      GraphPreset;                                       // 0x118(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMoviePipelineExecutorJob* GetDefaultObj();

	void SetStatusProgress(float InProgress);
	void SetStatusMessage(const class FString& InStatus);
	void SetSequence(const struct FSoftObjectPath& InSequence);
	void SetPresetOrigin(class UMoviePipelinePrimaryConfig* InPreset);
	void SetIsEnabled(bool bInEnabled);
	void SetGraphPreset(class UMovieGraphConfig* InGraphPreset);
	void SetGraphConfig(class UMovieGraphConfig* InGraphConfig);
	void SetConsumed(bool bInConsumed);
	void SetConfiguration(class UMoviePipelinePrimaryConfig* InPreset);
	void OnDuplicated();
	bool IsUsingGraphConfiguration();
	bool IsEnabled();
	bool IsConsumed();
	float GetStatusProgress();
	class FString GetStatusMessage();
	class UMoviePipelinePrimaryConfig* GetPresetOrigin();
	class UMovieGraphConfig* GetGraphPreset();
	class UMovieGraphConfig* GetGraphConfig();
	class UMoviePipelinePrimaryConfig* GetConfiguration();
};

// 0x40 (0x68 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineQueue
class UMoviePipelineQueue : public UObject
{
public:
	TArray<class UMoviePipelineExecutorJob*>     Jobs;                                              // 0x28(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UMoviePipelineQueue>    QueueOrigin;                                       // 0x38(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3C3F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineQueue* GetDefaultObj();

	void SetQueueOrigin(class UMoviePipelineQueue* InConfig);
	void SetJobIndex(class UMoviePipelineExecutorJob* InJob, int32 Index);
	class UMoviePipelineQueue* GetQueueOrigin();
	TArray<class UMoviePipelineExecutorJob*> GetJobs();
	class UMoviePipelineExecutorJob* DuplicateJob(class UMoviePipelineExecutorJob* InJob);
	void DeleteJob(class UMoviePipelineExecutorJob* InJob);
	void DeleteAllJobs();
	void CopyFrom(class UMoviePipelineQueue* InQueue);
	class UMoviePipelineExecutorJob* AllocateNewJob(TSubclassOf<class UMoviePipelineExecutorJob> InJobType);
};

// 0x60 (0x90 - 0x30)
// Class MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem
class UMoviePipelineQueueEngineSubsystem : public UEngineSubsystem
{
public:
	FMulticastInlineDelegateProperty_            OnRenderFinished;                                  // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UMoviePipelineExecutorBase*            ActiveExecutor;                                    // 0x40(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMoviePipelineQueue*                   CurrentQueue;                                      // 0x48(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D33[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineQueueEngineSubsystem* GetDefaultObj();

	void SetConfiguration(TSubclassOf<class UMovieRenderDebugWidget> InProgressWidgetClass, bool bRenderPlayerViewport);
	void RenderQueueWithExecutorInstance(class UMoviePipelineExecutorBase* InExecutor);
	class UMoviePipelineExecutorBase* RenderQueueWithExecutor(TSubclassOf<class UMoviePipelineExecutorBase> InExecutorType);
	void RenderJob(class UMoviePipelineExecutorJob* InJob);
	bool IsRendering();
	class UMoviePipelineQueue* GetQueue();
	class UMoviePipelineExecutorBase* GetActiveExecutor();
	class UMoviePipelineExecutorJob* AllocateJob(class ULevelSequence* InSequence);
};

// 0x0 (0x48 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineRenderPass
class UMoviePipelineRenderPass : public UMoviePipelineSetting
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineRenderPass* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class MovieRenderPipelineCore.MoviePipelineShotConfig
class UMoviePipelineShotConfig : public UMoviePipelineConfigBase
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineShotConfig* GetDefaultObj();

};

// 0x48 (0x90 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineVideoOutputBase
class UMoviePipelineVideoOutputBase : public UMoviePipelineOutputBase
{
public:
	uint8                                        Pad_3D74[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineVideoOutputBase* GetDefaultObj();

};

}


