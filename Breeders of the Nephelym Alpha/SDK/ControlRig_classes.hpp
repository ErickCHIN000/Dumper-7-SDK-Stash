#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x628 (0x650 - 0x28)
// Class ControlRig.ControlRig
class UControlRig : public UObject
{
public:
	uint8                                        Pad_8E[0x1D];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ERigExecutionType                 ExecutionType;                                     // 0x45(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class URigVM*                                VM;                                                // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FRigHierarchyContainer                Hierarchy;                                         // 0x50(0x368)(NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UControlRigGizmoLibrary> GizmoLibrary;                                      // 0x3B8(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_91[0x10];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FCachedPropertyPath> InputProperties;                                   // 0x3F0(0x50)(Deprecated, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FCachedPropertyPath> OutputProperties;                                  // 0x440(0x50)(Deprecated, NativeAccessSpecifierPrivate)
	struct FControlRigDrawContainer              DrawContainer;                                     // 0x490(0x18)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_93[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimationDataSourceRegistry*          DataSourceRegistry;                                // 0x4C0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FName>                          EventQueue;                                        // 0x4C8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_94[0x78];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigInfluenceMapPerEvent              Influences;                                        // 0x550(0x60)(NativeAccessSpecifierPrivate)
	class UControlRig*                           InteractionRig;                                    // 0x5B0(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UControlRig>               InteractionRigClass;                               // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UAssetUserData*>                AssetUserData;                                     // 0x5C0(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_97[0x80];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRig* GetDefaultObj();

	void SetInteractionRigClass(TSubclassOf<class UControlRig> InInteractionRigClass);
	void SetInteractionRig(class UControlRig* InInteractionRig);
	TSubclassOf<class UControlRig> GetInteractionRigClass();
	class UControlRig* GetInteractionRig();
};

// 0x10 (0x660 - 0x650)
// Class ControlRig.AdditiveControlRig
class UAdditiveControlRig : public UControlRig
{
public:
	uint8                                        Pad_9A[0x10];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAdditiveControlRig* GetDefaultObj();

};

// 0x8 (0x2C0 - 0x2B8)
// Class ControlRig.ControlRigAnimInstance
class UControlRigAnimInstance : public UAnimInstance
{
public:
	uint8                                        Pad_9D[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRigAnimInstance* GetDefaultObj();

};

// 0x0 (0x328 - 0x328)
// Class ControlRig.ControlRigBlueprintGeneratedClass
class UControlRigBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:

	static class UClass* StaticClass();
	static class UControlRigBlueprintGeneratedClass* GetDefaultObj();

};

// 0xE0 (0x530 - 0x450)
// Class ControlRig.ControlRigComponent
class UControlRigComponent : public UPrimitiveComponent
{
public:
	TSubclassOf<class UControlRig>               ControlRigClass;                                   // 0x450(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPostInitializeDelegate;                          // 0x458(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPreSetupDelegate;                                // 0x468(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPostSetupDelegate;                               // 0x478(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPreUpdateDelegate;                               // 0x488(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPostUpdateDelegate;                              // 0x498(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FControlRigComponentMappedElement> MappedElements;                                    // 0x4A8(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bResetTransformBeforeTick;                         // 0x4B8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResetInitialsBeforeSetup;                         // 0x4B9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateRigOnTick;                                  // 0x4BA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateInEditor;                                   // 0x4BB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawBones;                                        // 0x4BC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowDebugDrawing;                                 // 0x4BD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_215[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UControlRig*                           ControlRig;                                        // 0x4C0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_217[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRigComponent* GetDefaultObj();

	void Update(float DeltaTime);
	void SetMappedElements(const TArray<struct FControlRigComponentMappedElement>& NewMappedElements);
	void SetInitialSpaceTransform(class FName SpaceName, const struct FTransform& InitialTransform, enum class EControlRigComponentSpace Space);
	void SetInitialBoneTransform(class FName BoneName, const struct FTransform& InitialTransform, enum class EControlRigComponentSpace Space, bool bPropagateToChildren);
	void SetControlVector2D(class FName ControlName, const struct FVector2D& Value);
	void SetControlTransform(class FName ControlName, const struct FTransform& Value, enum class EControlRigComponentSpace Space);
	void SetControlScale(class FName ControlName, const struct FVector& Value, enum class EControlRigComponentSpace Space);
	void SetControlRotator(class FName ControlName, const struct FRotator& Value, enum class EControlRigComponentSpace Space);
	void SetControlPosition(class FName ControlName, const struct FVector& Value, enum class EControlRigComponentSpace Space);
	void SetControlOffset(class FName ControlName, const struct FTransform& OffsetTransform, enum class EControlRigComponentSpace Space);
	void SetControlInt(class FName ControlName, int32 Value);
	void SetControlFloat(class FName ControlName, float Value);
	void SetControlBool(class FName ControlName, bool Value);
	void SetBoneTransform(class FName BoneName, const struct FTransform& Transform, enum class EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren);
	void SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh* InSkeletalMesh);
	void OnPreUpdate(class UControlRigComponent* Component);
	void OnPreSetup(class UControlRigComponent* Component);
	void OnPostUpdate(class UControlRigComponent* Component);
	void OnPostSetup(class UControlRigComponent* Component);
	void OnPostInitialize(class UControlRigComponent* Component);
	void Initialize();
	struct FTransform GetSpaceTransform(class FName SpaceName, enum class EControlRigComponentSpace Space);
	struct FTransform GetInitialSpaceTransform(class FName SpaceName, enum class EControlRigComponentSpace Space);
	struct FTransform GetInitialBoneTransform(class FName BoneName, enum class EControlRigComponentSpace Space);
	TArray<class FName> GetElementNames(enum class ERigElementType ElementType);
	struct FVector2D GetControlVector2D(class FName ControlName);
	struct FTransform GetControlTransform(class FName ControlName, enum class EControlRigComponentSpace Space);
	struct FVector GetControlScale(class FName ControlName, enum class EControlRigComponentSpace Space);
	struct FRotator GetControlRotator(class FName ControlName, enum class EControlRigComponentSpace Space);
	class UControlRig* GetControlRig();
	struct FVector GetControlPosition(class FName ControlName, enum class EControlRigComponentSpace Space);
	struct FTransform GetControlOffset(class FName ControlName, enum class EControlRigComponentSpace Space);
	int32 GetControlInt(class FName ControlName);
	float GetControlFloat(class FName ControlName);
	bool GetControlBool(class FName ControlName);
	struct FTransform GetBoneTransform(class FName BoneName, enum class EControlRigComponentSpace Space);
	float GetAbsoluteTime();
	bool DoesElementExist(class FName Name, enum class ERigElementType ElementType);
	void ClearMappedElements();
	void AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, const TArray<struct FControlRigComponentMappedBone>& Bones, const TArray<struct FControlRigComponentMappedCurve>& Curves);
	void AddMappedElements(const TArray<struct FControlRigComponentMappedElement>& NewMappedElements);
	void AddMappedComponents(const TArray<struct FControlRigComponentMappedComponent>& Components);
	void AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent);
};

// 0x98 (0x2B8 - 0x220)
// Class ControlRig.ControlRigControlActor
class AControlRigControlActor : public AActor
{
public:
	class AActor*                                ActorToTrack;                                      // 0x220(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UControlRig>               ControlRigClass;                                   // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRefreshOnTick;                                    // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSelectable;                                     // 0x231(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24D[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    MaterialOverride;                                  // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ColorParameter;                                    // 0x240(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCastShadows;                                      // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_251[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       ActorRootComponent;                                // 0x258(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UControlRig*                           ControlRig;                                        // 0x260(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FName>                          ControlNames;                                      // 0x268(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FTransform>                    GizmoTransforms;                                   // 0x278(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UStaticMeshComponent*>          Components;                                        // 0x288(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UMaterialInstanceDynamic*>      Materials;                                         // 0x298(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	class FName                                  ColorParameterName;                                // 0x2A8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_257[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AControlRigControlActor* GetDefaultObj();

	void Refresh();
	void Clear();
};

// 0x28 (0x248 - 0x220)
// Class ControlRig.ControlRigGizmoActor
class AControlRigGizmoActor : public AActor
{
public:
	class USceneComponent*                       ActorRootComponent;                                // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ControlRigIndex;                                   // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ControlName;                                       // 0x234(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ColorParameterName;                                // 0x23C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x244(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bSelected : 1;                                     // Mask: 0x2, PropSize: 0x10x244(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bSelectable : 1;                                   // Mask: 0x4, PropSize: 0x10x244(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bHovered : 1;                                      // Mask: 0x8, PropSize: 0x10x244(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2E0[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AControlRigGizmoActor* GetDefaultObj();

	void SetSelected(bool bInSelected);
	void SetSelectable(bool bInSelectable);
	void SetHovered(bool bInHovered);
	void SetGlobalTransform(struct FTransform& InTransform);
	void SetEnabled(bool bInEnabled);
	void OnTransformChanged(struct FTransform& NewTransform);
	void OnSelectionChanged(bool bIsSelected);
	void OnManipulatingChanged(bool bIsManipulating);
	void OnHoveredChanged(bool bIsSelected);
	void OnEnabledChanged(bool bIsEnabled);
	bool IsSelectedInEditor();
	bool IsHovered();
	bool IsEnabled();
	struct FTransform GetGlobalTransform();
};

// 0xB8 (0xE0 - 0x28)
// Class ControlRig.ControlRigGizmoLibrary
class UControlRigGizmoLibrary : public UObject
{
public:
	uint8                                        Pad_2ED[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControlRigGizmoDefinition            DefaultGizmo;                                      // 0x30(0x60)(Edit, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterial>              DefaultMaterial;                                   // 0x90(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MaterialColorParameter;                            // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FControlRigGizmoDefinition>    Gizmos;                                            // 0xC0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F1[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRigGizmoLibrary* GetDefaultObj();

};

// 0x8 (0x2C0 - 0x2B8)
// Class ControlRig.ControlRigLayerInstance
class UControlRigLayerInstance : public UAnimInstance
{
public:
	uint8                                        Pad_2F8[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRigLayerInstance* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ControlRig.ControlRigValidationPass
class UControlRigValidationPass : public UObject
{
public:

	static class UClass* StaticClass();
	static class UControlRigValidationPass* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class ControlRig.ControlRigNumericalValidationPass
class UControlRigNumericalValidationPass : public UControlRigValidationPass
{
public:
	bool                                         bCheckControls;                                    // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckBones;                                       // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckCurves;                                      // 0x2A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_306[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TranslationPrecision;                              // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationPrecision;                                 // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScalePrecision;                                    // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurvePrecision;                                    // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EventNameA;                                        // 0x3C(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  EventNameB;                                        // 0x44(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_30B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigPose                              Pose;                                              // 0x50(0x10)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UControlRigNumericalValidationPass* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class ControlRig.ControlRigObjectHolder
class UControlRigObjectHolder : public UObject
{
public:
	TArray<class UObject*>                       Objects;                                           // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UControlRigObjectHolder* GetDefaultObj();

};

// 0x58 (0x220 - 0x1C8)
// Class ControlRig.ControlRigSequence
class UControlRigSequence : public ULevelSequence
{
public:
	TSoftObjectPtr<class UAnimSequence>          LastExportedToAnimationSequence;                   // 0x1C8(0x28)(AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          LastExportedUsingSkeletalMesh;                     // 0x1F0(0x28)(AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastExportedFrameRate;                             // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_318[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRigSequence* GetDefaultObj();

};

// 0x10 (0x2D0 - 0x2C0)
// Class ControlRig.ControlRigSequencerAnimInstance
class UControlRigSequencerAnimInstance : public UAnimSequencerInstance
{
public:
	uint8                                        Pad_31E[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRigSequencerAnimInstance* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class ControlRig.ControlRigSettings
class UControlRigSettings : public UDeveloperSettings
{
public:

	static class UClass* StaticClass();
	static class UControlRigSettings* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class ControlRig.ControlRigValidator
class UControlRigValidator : public UObject
{
public:
	TArray<class UControlRigValidationPass*>     Passes;                                            // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_33F[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRigValidator* GetDefaultObj();

};

// 0x18 (0x668 - 0x650)
// Class ControlRig.FKControlRig
class UFKControlRig : public UControlRig
{
public:
	TArray<bool>                                 IsControlActive;                                   // 0x650(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	enum class EControlRigFKRigExecuteMode       ApplyMode;                                         // 0x660(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_34C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFKControlRig* GetDefaultObj();

};

// 0x1A0 (0x2E8 - 0x148)
// Class ControlRig.MovieSceneControlRigParameterSection
class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{
public:
	class UControlRig*                           ControlRig;                                        // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UControlRig>               ControlRigClass;                                   // 0x150(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                 ControlsMask;                                      // 0x158(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FMovieSceneTransformMask              TransformMask;                                     // 0x168(0x4)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_359[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneFloatChannel               Weight;                                            // 0x170(0xA0)(NativeAccessSpecifierPublic)
	TMap<class FName, struct FChannelMapInfo>    ControlChannelMap;                                 // 0x210(0x50)(NativeAccessSpecifierPublic)
	TArray<struct FEnumParameterNameAndCurve>    EnumParameterNamesAndCurves;                       // 0x260(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves;                    // 0x270(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_35D[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneControlRigParameterSection* GetDefaultObj();

};

// 0x38 (0xC8 - 0x90)
// Class ControlRig.MovieSceneControlRigParameterTrack
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_367[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UControlRig*                           ControlRig;                                        // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMovieSceneSection*                    SectionToKey;                                      // 0xA8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xB0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class FName                                  TrackName;                                         // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneControlRigParameterTrack* GetDefaultObj();

};

}


