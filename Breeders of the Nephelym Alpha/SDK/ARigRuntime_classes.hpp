#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x258 - 0x220)
// Class ARigRuntime.RigConstraint
class ARigConstraint : public AActor
{
public:
	class UMaterialBillboardComponent*           BillboardComponent;                                // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bW2;                                               // 0x228(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bW3;                                               // 0x229(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bW4;                                               // 0x22A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bW5;                                               // 0x22B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        W1;                                                // 0x22C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        W2;                                                // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        W3;                                                // 0x234(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        W4;                                                // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        W5;                                                // 0x23C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        TargetActors;                                      // 0x240(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	bool                                         bEnable;                                           // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseWithRig;                                       // 0x251(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6F[0x6];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ARigConstraint* GetDefaultObj();

};

// 0x48 (0x2A0 - 0x258)
// Class ARigRuntime.AimConstraint
class AAimConstraint : public ARigConstraint
{
public:
	struct FAimSettings                          AimSettings;                                       // 0x258(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               UpVector;                                          // 0x268(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TLazyObjectPtr<class AActor>                 UpActor;                                           // 0x274(0x1C)(Edit, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RestPosition;                                      // 0x290(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_72[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAimConstraint* GetDefaultObj();

};

// 0x28 (0x248 - 0x220)
// Class ARigRuntime.ARControllerBase
class AARControllerBase : public AActor
{
public:
	class USceneComponent*                       Scene;                                             // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    MaterialInterface;                                 // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x230(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AARControllerBase* GetDefaultObj();

};

// 0x60 (0x2A8 - 0x248)
// Class ARigRuntime.ARController
class AARController : public AARControllerBase
{
public:
	class UStaticMeshComponent*                  Mesh;                                              // 0x248(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FControllerLimits                     Limits;                                            // 0x250(0x4C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              LockedRotation;                                    // 0x29C(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AARController* GetDefaultObj();

	void LimitTransformations();
};

// 0x68 (0x310 - 0x2A8)
// Class ARigRuntime.AnimOffset
class AAnimOffset : public AARController
{
public:
	float                                        Weight;                                            // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverride;                                         // 0x2AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowTargetActor;                                  // 0x2AD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Source;                                            // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Target;                                            // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Parent;                                            // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_77[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            OverrideOffset;                                    // 0x2D0(0x30)(Edit, BlueprintVisible, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnable;                                           // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_78[0xF];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAnimOffset* GetDefaultObj();

	void UpdateAnimOffset();
};

// 0x8 (0x2B0 - 0x2A8)
// Class ARigRuntime.ARControllerFk
class AARControllerFk : public AARController
{
public:
	float                                        FollowParent;                                      // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_79[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AARControllerFk* GetDefaultObj();

};

// 0x80 (0x2C8 - 0x248)
// Class ARigRuntime.ARControllerFkIk
class AARControllerFkIk : public AARControllerBase
{
public:
	class UMaterialBillboardComponent*           Billboard;                                         // 0x248(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USphereComponent*                      Sphere;                                            // 0x250(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Size;                                              // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FkIk;                                              // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFkIkAutoSnap;                                     // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowTwistControllers;                             // 0x261(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableFingers;                                    // 0x262(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B[0x1];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Curl;                                              // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Spread;                                            // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Relax;                                             // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThumbCurl;                                         // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThumbRoll;                                         // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThumbPitch;                                        // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThumbYaw;                                          // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableFoot;                                       // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FootRoll;                                          // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ToeRoll;                                           // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeelTwist;                                         // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ToeTwist;                                          // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxisEnum                         FingersAxis;                                       // 0x294(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRotator>                      Offsets;                                           // 0x298(0x10)(Edit, ZeroConstructor, EditConst, AdvancedDisplay, NativeAccessSpecifierPublic)
	class FString                                FingersReason;                                     // 0x2A8(0x10)(Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FootReason;                                        // 0x2B8(0x10)(Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AARControllerFkIk* GetDefaultObj();

};

// 0x18 (0x2C0 - 0x2A8)
// Class ARigRuntime.ARControllerIk
class AARControllerIk : public AARController
{
public:
	float                                        StretchScale;                                      // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowStretching;                                  // 0x2AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSoftStretch;                                      // 0x2AD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StretchSoftness;                                   // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoleVectorLock;                                    // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThreeBoneIkBend;                                   // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AARControllerIk* GetDefaultObj();

};

// 0x20 (0x2C8 - 0x2A8)
// Class ARigRuntime.ARControllerPv
class AARControllerPv : public AARController
{
public:
	bool                                         bAttachToIk;                                       // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                IkController;                                      // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                MainController;                                    // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                PvGroup;                                           // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AARControllerPv* GetDefaultObj();

};

// 0x10 (0x2B8 - 0x2A8)
// Class ARigRuntime.ARControllerSplineIk
class AARControllerSplineIk : public AARController
{
public:
	bool                                         bFkMode;                                           // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSolveEnds;                                        // 0x2A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Curvature;                                         // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MidParentWeight;                                   // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MidParentLerp;                                     // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AARControllerSplineIk* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ARigRuntime.ARigFunctions
class UARigFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UARigFunctions* GetDefaultObj();

	void UpdateSkeletalMeshSection(class ULevelSequence* LevelSequence, class ASkeletalMeshActor* SkelMeshActor, float Time);
	void UpdateSkeletalMeshPose(class USkeletalMeshComponent* SkeletalMeshComponent);
	void UpdateSequncerComponent(class UMovieScene3DTransformSection* TransformSection, class USceneComponent* SceneComponent, float Time);
	void UpdateSequncer(class ULevelSequence* LevelSequence, float Time);
	void UpdateSequencerActorTransform(class ULevelSequence* LevelSequence, class AActor* Actor, float Time);
	void UpdateFloatSectionProperty(class UMovieSceneFloatSection* FloatSection, class AActor* Actor, class FName PropertyName, float Time);
	void UpdateAllConstraints();
	void TwoBoneIkOpt(const struct FTransform& Effector, const struct FVector& PoleVector, const struct FVector& InRootPos, float UpperLimbLength, float LowerLimbLength, float StretchScale, bool bAutoStretch, bool bSoftStretch, float StretchSoftness, float PoleVectorLock, struct FTransform* RootBone, struct FTransform* MidBone, struct FTransform* TipBone);
	void TwoBoneIk(const struct FTransform& EffectorPos, const struct FVector& PoleVector, const struct FTransform& InUpBone, const struct FTransform& MidBoneLocal, const struct FTransform& LowBoneLocal, bool bUseAimSettings, const struct FAimSettings& UpAimSettings, const struct FAimSettings& MidAimSettings, bool bAllowStretching, bool bSoftStretch, float StretchScale, struct FTransform* UpBone, struct FTransform* MidBone, struct FTransform* LowBone);
	TArray<class FName> StringsToNames(const TArray<class FString>& Strings);
	void ShiftTransformSectionAnim(class UMovieScene3DTransformSection* TransformSection, float ShiftAnim);
	void SetTransformSectionKey(class AActor* Actor, class UMovieScene3DTransformSection* TransformSection, const struct FTransform& Transform, float Time, bool Translation, bool Rotation, bool Scale, bool* Result);
	bool SetTransformKey(class ULevelSequence* LevelSequence, class AActor* Actor, const struct FTransform& Transform, float Time, bool Translation, bool Rotation, bool Scale);
	void SetSelectable(class UPrimitiveComponent* Component, bool bSelectable);
	void SetSectionStartTime(class UMovieSceneSection* MovieSceneSection, float Time);
	void SetSectionEndTime(class UMovieSceneSection* MovieSceneSection, float Time);
	void SetMorphTarget(class USkeletalMeshComponent* SkeletalMeshComponent, class FName TargetName, float Weight);
	void SetActorSelectable(class AActor* Actor, bool bSelectable);
	void SelectActorInEditor(class AActor* Actor, bool IsSelected);
	void RenameActor(class AActor* Actor, class FName NewName);
	void RemoveTrackFromBinding(class ULevelSequence* LevelSequence, TSubclassOf<class UMovieSceneTrack> TrackClass, const struct FGuid& Guid);
	void RemoveStaticCurvesForActors(class ULevelSequence* LevelSequence, const TArray<class AActor*>& Actors, bool bRemoveBinding);
	void RemoveStaticCurves(class ULevelSequence* LevelSequence, bool bRemoveBinding);
	void RemoveBindingFromSequencer(class ULevelSequence* LevelSequence, const struct FGuid& Guid);
	struct FVector RemapVectorFromAim(float RollValue, const struct FVector& InVector, const struct FAimSettings& AimSettings);
	bool PromtDialogue(const class FString& Title, const class FString& Message, const class FString& Ok, const class FString& Cancel, const TArray<class UObject*>& Objects);
	void PreviewSetAnimPosition(class USkeletalMeshComponent* SkelMeshComp, int32 SequenceIndex, class UAnimSequenceBase* InAnimSequence, float InPosition, float Weight);
	void PostProcessAnimSequence(class UAnimSequence* AnimSequence, class USkeletalMeshComponent* SkeletalMeshComponent);
	void PostEditChange(class AActor* Actor);
	class UMovieScene3DTransformSection* PasteKeysToActor(class ULevelSequence* LevelSequence, class AActor* Actor, class UMovieScene3DTransformSection* SourceSection, float PasteTime);
	struct FTransform ParentConstraintLerp(const struct FTransform& A, const struct FTransform& B, const struct FTransform& OffsetA, const struct FTransform& OffsetB, float Alpha);
	void Parent(class AActor* Child, class AActor* Parent);
	void OpenEditorForAsset(class UObject* Asset);
	void NotificationBox(const class FString& String, float FadeIn, float Expire, float FadeOut, bool bOutputLog);
	void ModifyObject(class UObject* Object);
	bool MatchesWildcard(class FName SourceName, class FName Wildcard, enum class ESearchCase SearchCase);
	struct FVector LerpVector(const struct FVector& A, const struct FVector& B, float Alpha);
	void KeyAllActiveCurves(class USkeletalMeshComponent* SkelMeshComp, class UAnimSequence* AnimSequence, float Time);
	bool IsSequencerHasBindingForActor(class AActor* Actor, class ULevelSequence* LevelSequence, struct FGuid* Guid);
	class AActor* GroupController(class AActor* Controller);
	struct FVector GetWeightedAverageVector(const TArray<struct FVector>& Vectors, const TArray<float>& Weights);
	struct FTransform GetWeightedAverageTransform(const TArray<struct FTransform>& Transforms, const TArray<struct FTransform>& Offsets, const TArray<float>& Weights);
	struct FRotator GetWeightedAverageRotator(const TArray<struct FRotator>& Rotators, const TArray<float>& Weights);
	TArray<class UMovieScene3DTransformSection*> GetTransformSectionsForActors(class ULevelSequence* LevelSequence, const TArray<class AActor*>& Actors);
	class UMovieScene3DTransformSection* GetTransformSectionFromBinding(class ULevelSequence* LevelSequence, const struct FGuid& Guid);
	class UMovieScene3DTransformSection* GetTransformSectionFromActor(class ULevelSequence* LevelSequence, class AActor* Actor);
	void GetSpaceBases(class USkinnedMeshComponent* SkinnedMeshComponent, TArray<struct FTransform>* SpaceBases);
	float GetSoftIkStretchDistance(float Distance, float ChainLength, float SoftPoint);
	bool GetSequencersWithActors(const TArray<class AActor*>& Actors, TArray<class UObject*>* LevelSequences);
	void GetSequencerPlaybackRange(class ULevelSequence* LevelSequence, int32* PlaybackStart, int32* PlaybackEnd);
	float GetSequencerFrameRate(class ULevelSequence* LevelSequence);
	float GetSequencerFrameInterval(class ULevelSequence* LevelSequence);
	void GetSequencerComponents(class ULevelSequence* LevelSequence, TArray<struct FGuid>* Guids, TArray<class USceneComponent*>* SceneComponents);
	void GetRigMapping(class USkeleton* Skeleton, const TArray<class FName>& BaseNames, TArray<class FName>* RigNames);
	struct FVector GetPoleVectorLocation(const struct FVector& Up, const struct FVector& Mid, const struct FVector& End, float Multiply);
	float GetLastRenderTime(class UPrimitiveComponent* Component);
	void GetFloatSectionsFromBinding(class ULevelSequence* LevelSequence, const struct FGuid& Guid, TArray<class UMovieSceneFloatSection*>* FloatSections, TArray<class FName>* PropertyNames);
	class AActor* GetControllerByName(class FName Name, class AActor* Rig);
	void GetClosestAxis(const struct FVector& TargetVector, const struct FTransform& Transform, class FString* FirstAxis, class FString* SecondAxis);
	struct FTransform GetBoneSocketTransform(class USkeletalMeshComponent* SkelMeshComp, class FName BoneName);
	TArray<class FName> GetBonesHierarchy(class USkeletalMeshComponent* SkelMeshComp, class FName RootBone, class FName TipBone);
	class UObject* GetAssetWithOpenedEditor(class UClass* Class);
	TArray<class UObject*> GetAssetsByClass(class UClass* Class);
	TArray<class UMovieSceneSkeletalAnimationSection*> GetAnimSectionsFromActor(class ULevelSequence* LevelSequence, class AActor* Actor);
	struct FAimSettings GetAimSettings(const struct FVector& Aim, const struct FVector& Up, const struct FTransform& Transform);
	struct FAimSettings GetAimAxis(const struct FVector& Aim, const struct FVector& Up, const struct FTransform& Transform);
	struct FRotator FilterAimOffsetAxis(enum class EAxisEnum AimAxis, const struct FRotator& Offset);
	struct FTransform EvaluateTransformSection(class UMovieScene3DTransformSection* TransformSection, float Time);
	float EvaluateFloatSection(class UMovieSceneFloatSection* FloatSection, float Time);
	class AActor* CreateEmptyController(class AActor* Rig, class FName Name, const struct FTransform& Transform);
	void CreateControllerFromSocket(class UClass* Class, class AActor* Rig, class USkeletalMeshComponent* SkelMeshComp, class FName Name, class FName Ending, const struct FControllerShapeData& Shape, const struct FControllerLimits& Limits, class AActor** Controller, class AActor** Group, class AActor** Offset, bool bGroup, bool bWorldOrientation, bool bCreateOffset);
	class AActor* CreateController(class UClass* Class, class AActor* Rig, class FName Name, const struct FTransform& Transform, const struct FControllerShapeData& Shape, const struct FControllerLimits& Limits, const struct FRotator& RelativeRotation);
	class ARigConstraint* CreateConstraint(class UClass* Class, const TArray<class AActor*>& Targets, bool bVisibility, class AActor* UpActor);
	void CreateAnimSequence(class USkeletalMeshComponent* SkeletalMeshComponent, class UAnimSequence** AnimSequence);
	void CopyTransformSectionCurve(class UMovieScene3DTransformSection* SourceTransformSection, class UMovieScene3DTransformSection* TargetTransformSection, enum class ETransformType TransformType, enum class EAxis Axis);
	struct FTransform ConvertTransformToRelativeReverse(const struct FTransform& WorldTransform, const struct FTransform& LocalTransform);
	void CloseAllEditorsForAsset(class UObject* Asset);
	class FName AppendName(class FName A, class FName B);
	struct FRotator AimConstraint(const struct FVector& Aim, const struct FVector& Up, const struct FVector& Target, const struct FAimSettings& AimSettings);
	class UMovieScene3DTransformSection* AddTransformTrack(class ULevelSequence* LevelSequence, const struct FGuid& Guid, float StartFrame, float EndFrame);
	TArray<class FName> AddToArrayOfNames(class FName AddName, const TArray<class FName>& InNames);
	TArray<class AActor*> AddToArrayOfActors(class AActor* AddActor, const TArray<class AActor*>& InActors);
	void AddRawKeyFromPose(class USkeletalMeshComponent* SkeletalMeshComponent, class UAnimSequence* AnimSequence, float FrameRate);
	void AddCurveValue(class USkeletalMeshComponent* SkelMeshComp, class FName CurveName, float Value);
	void AddCurveKey(class UAnimSequence* AnimSequence, class FName TargetName, float Time, float Value);
	struct FGuid AddBindingToSequencer(class ULevelSequence* LevelSequence, class AActor* Actor);
	class UMovieSceneSkeletalAnimationSection* AddAnimTrack(class ULevelSequence* LevelSequence, class UAnimSequence* AnimSequence, const struct FGuid& Guid, float StartTime);
};

// 0x0 (0x28 - 0x28)
// Class ARigRuntime.ARCustomCtrl
class UARCustomCtrl : public UARigFunctions
{
public:

	static class UClass* StaticClass();
	static class UARCustomCtrl* GetDefaultObj();

	struct FBonesTransforms UpdateCustomControllers(const TArray<struct FCustomControllerData>& CustomControllers, const struct FBonesTransforms& BonesTransforms);
	void PoseCustomControllers(class USkeletalMeshComponent* SkelMeshComp, const TArray<struct FCustomControllerData>& CustomControllers);
	void ParentCustomControllers(const TArray<struct FCustomControllerData>& InCC, class AActor* Rig);
	void KeyCustomControllers(const TArray<struct FCustomControllerData>& CustomControllers, class ULevelSequence* LevelSequence, float Time);
	TArray<struct FCustomControllerData> CreateCustomControllers(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, const TArray<struct FCustomControllerData>& InCC);
};

// 0x0 (0x28 - 0x28)
// Class ARigRuntime.ARFace
class UARFace : public UARigFunctions
{
public:

	static class UClass* StaticClass();
	static class UARFace* GetDefaultObj();

	void UpdateMorphTargets(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings);
	struct FBonesTransforms UpdateFaceRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings, const struct FBonesTransforms& BonesTransforms);
	struct FBonesTransforms UpdateEyes(const struct FFaceSettings& FaceSettings, const struct FBonesTransforms& BonesTransforms, TArray<struct FTransform>* EyesTransforms);
	struct FBonesTransforms UpdateEyelids(const struct FFaceSettings& FaceSettings, const struct FBonesTransforms& BonesTransforms, const TArray<struct FTransform>& EyesTransforms);
	void PoseMorphTargets(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings);
	void PoseFaceRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings);
	void PoseEyes(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings);
	void PoseEyelids(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings);
	void KeyMorphTargets(const struct FFaceSettings& FaceSettings, class ULevelSequence* LevelSequence, float Time);
	void KeyMorphTargetCurves(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings, class UAnimSequence* AnimSequence, float Time, bool bUpdateFromSource);
	void KeyFaceRig(const struct FFaceSettings& FaceSettings, class ULevelSequence* LevelSequence, float Time);
	void KeyEyes(const struct FFaceSettings& FaceSettings, class ULevelSequence* LevelSequence, float Time);
	void KeyEyelids(const struct FFaceSettings& FaceSettings, class ULevelSequence* LevelSequence, float Time);
	struct FFaceSettings InitFaceRigData(const struct FFaceSettings& FaceSettings);
	struct FRotator GetEyelidsRotation(const struct FVector& CtrlPos, const struct FRotator& BoneSpaceR, const struct FAimSettings& AimSettings, float PosMult, float Follow);
	struct FFaceSettings FaceParentController(const struct FFaceSettings& FaceSettings, class AActor* Rig);
	struct FFaceSettings CreateMorphControllers(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings, class AActor* Rig);
	struct FFaceSettings CreateFaceRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings, class AActor* Rig);
	struct FFaceSettings CreateEyes(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings, class AActor* Rig);
	struct FFaceSettings CreateEyelids(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings, class AActor* Rig);
	TArray<float> ConvertVectorToXZValues(const struct FVector& Vector, float Max);
};

// 0x0 (0x28 - 0x28)
// Class ARigRuntime.ARFkHierarchy
class UARFkHierarchy : public UARigFunctions
{
public:

	static class UClass* StaticClass();
	static class UARFkHierarchy* GetDefaultObj();

	struct FBonesTransforms UpdateFkHierarchyRigs(const TArray<struct FFkHierarchyData>& FkHierarchy, const struct FBonesTransforms& BonesTransforms);
	void PoseFkHierarchyRigs(class USkeletalMeshComponent* SkelMeshComp, const TArray<struct FFkHierarchyData>& FkHierarchyRigs);
	void PoseFkHierarchyRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFkHierarchyData& FkHierarchyData);
	void ParentFkHierarchyRigs(TArray<struct FFkHierarchyData>* FkHRigs, class AActor* Rig);
	void KeyFkHierarchyRigs(const TArray<struct FFkHierarchyData>& FkHierarchyRigs, class ULevelSequence* LevelSequence, float Time);
	void KeyFkHierarchyRig(const struct FFkHierarchyData& FkHierarchyData, class ULevelSequence* LevelSequence, float Time);
	TArray<struct FFkHierarchyData> CreateFkHierarchyRigs(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, const TArray<struct FFkHierarchyData>& FkHRigs);
	struct FFkHierarchyData CreateFkHierarchyRig(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, const struct FFkHierarchyData& FkH);
};

// 0x0 (0x28 - 0x28)
// Class ARigRuntime.ARFkIk
class UARFkIk : public UARigFunctions
{
public:

	static class UClass* StaticClass();
	static class UARFkIk* GetDefaultObj();

	struct FBonesTransforms UpdateTwoBoneTwistLimb(const struct FFkIkData& FkIkData, const TArray<struct FTransform>& InTransforms, float FkIk, const struct FBonesTransforms& BonesTransforms);
	void UpdateTwoBoneFkIk(const struct FFkIkData& FkIkData, float FkIk, bool bAllowStretching, float StretchScale, bool bSoftStretch, float StretchSoftness, float PoleVectorLock, const struct FVector& CharScale, struct FTransform* Low, struct FTransform* Mid, struct FTransform* Up);
	bool UpdateTwistBones(const struct FTwistBonesData& TwistBonesData, const struct FTransform& UpperT, const struct FTransform& LowerT, struct FBonesTransforms* BonesTransforms, const struct FVector& Scale);
	struct FBonesTransforms UpdateThreeBoneTwistLimb(const struct FFkIkData& FkIkData, const TArray<struct FTransform>& InTransforms, const struct FBonesTransforms& BonesTransforms);
	void UpdateThreeBoneFkIk(const struct FFkIkData& FkIkData, float FkIk, bool bAllowStretching, float StretchScale, bool bSoftStretch, float StretchSoftness, float PoleVectorLock, float Bend, const struct FVector& CharScale, struct FTransform* Tip, struct FTransform* Low, struct FTransform* Mid, struct FTransform* Up);
	void UpdateFootRig(const struct FFootControllersData& FootControllersData, float FootRoll, float ToeRoll, float HeelTwist, float ToeTwist, float FkIk);
	struct FBonesTransforms UpdateFoot(const struct FFkIkData& FkIkData, const struct FBonesTransforms& BonesTransforms);
	struct FBonesTransforms UpdateFkIkRigs(class USkeletalMeshComponent* SkelMeshComp, const TArray<struct FFkIkData>& FkIkRigs, const struct FVector& CharScale, const struct FBonesTransforms& BonesTransforms);
	struct FBonesTransforms UpdateFkIkRig(const struct FFkIkData& FkIkData, const struct FVector& CharScale, const struct FBonesTransforms& BonesTransforms);
	struct FBonesTransforms UpdateFingersRig(const struct FFkIkData& FkIkData, const struct FBonesTransforms& BonesTransforms);
	void UpdateFingersGroups(const struct FFingersData& FingersData, bool bEnableFingers, float Curl, float Spread, float Relax, float ThumbCurl, float ThumbRoll, float ThumbPitch, float ThumbYaw, enum class EAxisEnum FingersAxis, const TArray<struct FRotator>& Offsets);
	struct FBonesTransforms UpdateFingers(const struct FFingersData& FingersData, const struct FBonesTransforms& BonesTransforms);
	void ThreeBoneIkOpt(const struct FTransform& EffectorPos, const struct FTransform& RootPos, const struct FTransform& SecondIkPos, const struct FRotator& Roll, const struct FVector& UpPV, const struct FVector& LowPV, float UpLength, float MidLength, float LowLength, float StretchScale, bool bAllowStretching, bool bSoftStretch, float StretchSoftness, float PoleVectorLock, float Bend, struct FTransform* UpBone, struct FTransform* MidBone, struct FTransform* LowBone, struct FTransform* TipBone);
	void ThreeBoneIk(const struct FTransform& EffectorPos, const struct FVector& UpPV, const struct FVector& LowPV, const struct FTransform& UpBoneWorld, const struct FTransform& MidBoneLocal, const struct FTransform& LowBoneLocal, const struct FTransform& TipBoneLocal, const struct FAimSettings& UpAimSettings, const struct FAimSettings& MidAimSettings, const struct FAimSettings& LowAimSettings, const struct FRotator& Roll, bool bAllowStretching, bool bSoftStretch, float StretchScale, struct FTransform* UpBone, struct FTransform* MidBone, struct FTransform* LowBone, struct FTransform* Tip);
	void SnapTwoBoneIk(class USkeletalMeshComponent* SkelMeshComp, const struct FTwoBoneIkData& TwoBoneIkData);
	void SnapThreeBoneIk(class USkeletalMeshComponent* SkelMeshComp, const struct FTwoBoneIkData& TwoBoneIkData);
	void SnapFkIkLimb(class USkeletalMeshComponent* SkelMeshComp, const struct FFkIkData& FkIkData, bool bForce);
	void SnapFkHierarchyRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFkHierarchyData& FkHierarchyData);
	void SetFingersProperties(const struct FFingersData& FingersData, class AARControllerFkIk* FkIkController, class AActor* IkController);
	void PoseTwoBoneIk(class USkeletalMeshComponent* SkelMeshComp, const struct FTwoBoneIkData& TwoBoneIkData);
	void PoseTwistControllers(class USkeletalMeshComponent* SkelMeshComp, const struct FTwistBonesData& TwistBonesData);
	void PoseThreeBoneIk(class USkeletalMeshComponent* SkelMeshComp, const struct FTwoBoneIkData& TwoBoneIkData);
	void PoseFoot(class USkeletalMeshComponent* SkelMeshComp, class FName Toe, const struct FFootControllersData& FootControllersData);
	void PoseFkIkRigs(class USkeletalMeshComponent* SkelMeshComp, const TArray<struct FFkIkData>& FkIkRigs);
	void PoseFingers(class USkeletalMeshComponent* SkelMeshComp, const struct FFingersData& FingersData);
	void ParentFkIkRigs(TArray<struct FFkIkData>* FkIkRigs, class AActor* Rig);
	void KeyTwoBoneIk(const struct FTwoBoneIkData& TwoBoneIkData, class ULevelSequence* LevelSequence, float Time);
	void KeyTwistControllers(const struct FTwistBonesData& TwistBonesData, class ULevelSequence* LevelSequence, float Time);
	void KeyThreeBoneIk(const struct FTwoBoneIkData& TwoBoneIkData, class ULevelSequence* LevelSequence, float Time);
	void KeyFoot(const struct FFootControllersData& FootControllersData, class ULevelSequence* LevelSequence, float Time);
	void KeyFkIkRigs(const TArray<struct FFkIkData>& FkIkRigs, class ULevelSequence* LevelSequence, float Time);
	void KeyFkIkLimb(class ULevelSequence* Sequencer, const struct FFkIkData& FkIkData, float Time);
	void KeyFingers(const struct FFingersData& FingersData, class ULevelSequence* LevelSequence, float Time);
	void GetTwoBoneIkTwistOffsets(const struct FTransform& EffectorT, const struct FTransform& PoleVectorT, const struct FTransform& IkHelperT, const struct FTransform& MidBoneLocalT, const struct FTransform& LowBoneLocalT, const struct FAimSettings& AimSettings, bool bPoleVectorSimple, struct FAimSettings* UpAimSettings, struct FAimSettings* MidAimSettings);
	void GetTwoBoneIkSettings(class USkeletalMeshComponent* SkelMeshComp, struct FTwoBoneIkData* TwoBoneIk);
	void GetTwistLimbSettings(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, const struct FFkIkData& FkIkData, struct FTwistBonesData* TwistBonesA, struct FTwistBonesData* TwistBonesB, struct FTwistBonesData* TwistBonesC);
	struct FTwistBonesData GetTwistBonesSettings(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, const struct FTwistBonesData& TwistBonesData, const struct FAimSettings& AimSettings, const struct FTransform& UpBoneT, const struct FTransform& LowBoneT);
	void GetThreeBoneIkTwistOffsets(const struct FTransform& EffectorT, const struct FVector& UpPoleVectorV, const struct FVector& LowPoleVectorV, const struct FTransform& IkHelperT, const struct FTransform& MidBoneLocalT, const struct FTransform& LowBoneLocalT, const struct FTransform& TipBoneLocalT, const struct FTransform& MidBoneT, const struct FTransform& LowBoneT, const struct FAimSettings& AimSettingsA, const struct FAimSettings& AimSettingsB, bool bPoleVectorSimple, struct FAimSettings* UpAimSettings, struct FAimSettings* MidAimSettings, struct FAimSettings* LowAimSettings);
	void GetThreeBoneIkSettings(class USkeletalMeshComponent* SkelMeshComp, struct FTwoBoneIkData* TwoBoneIk);
	struct FVector GetPvPosFromMesh(class USkeletalMeshComponent* SkelMeshComp, class FName TipBone, float Multiply);
	struct FVector GetPvPosFromDir(class USkeletalMeshComponent* SkelMeshComp, class FName TipBone, float Multiply, bool bArm);
	enum class EAxisEnum GetFingersAxis(const struct FFingersData& FingersData, class AActor* IkController);
	struct FRotator GetFingerRotation(float Curl, float Spread, enum class EAxisEnum FingersAxis);
	void FkIkVis(const struct FFkIkData& FkIkData);
	struct FTwoBoneIkData CreateTwoBoneIkRig(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, struct FTwoBoneIkData* TwoBoneIk);
	void CreateTwoBoneIkControllers(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, struct FTwoBoneIkData* TwoBoneIk);
	struct FTwoBoneIkData CreateThreeBoneIkRig(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, struct FTwoBoneIkData* TwoBoneIk);
	void CreateThreeBoneIkControllers(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, struct FTwoBoneIkData* TwoBoneIk);
	void CreatePoleVectorController(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, class AActor* IkController, const struct FTwoBoneIkData& TwoBoneIk, class FName TipBone, bool bArm, class AActor** Controller, class AActor** Group);
	struct FFootControllersData CreateFootRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFkIkData& FkIkData, class AActor* Rig);
	TArray<struct FFkIkData> CreateFkIkRigs(class USkeletalMeshComponent* SkelMeshComp, const TArray<struct FFkIkData>& FkIkRigs, class AActor* Rig);
	struct FFkIkData CreateFkIkRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFkIkData& FkIkData, class AActor* Rig);
	class AActor* CreateFkIkControllerRig(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, const struct FTwoBoneIkData& TwoBoneIk);
	class AActor* CreateFkIkController(class AActor* Rig, class FName Name, const struct FTransform& Transform, const struct FVector& Offset, const struct FLinearColor& Color, float Size);
	struct FFingersData CreateFingersRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFkIkData& FkIkData, class AActor* Rig);
	void AimIkControllerToBone(class USkeletalMeshComponent* SkelMeshComp, class AActor* IkController, class AActor* IkOffset, class FName Bone, bool bArms);
};

// 0x0 (0x28 - 0x28)
// Class ARigRuntime.ARMFunctions
class UARMFunctions : public UARigFunctions
{
public:

	static class UClass* StaticClass();
	static class UARMFunctions* GetDefaultObj();

	void UpdateRig(class USkeletalMeshComponent* SkelMeshComp, const struct FModularRigData& ModularRigData, const struct FFaceSettings& FaceSettings, class ASkeletalMeshActor* SourceActor, class AActor* Rig, struct FBonesTransforms* BonesTransforms, struct FBonesTransforms* SourceBT);
	struct FBonesTransforms UpdatePoseFromSource(class ASkeletalMeshActor* SourceActor, class USkeletalMeshComponent* SkelMeshComp, const struct FModularRigData& ModularRigData);
	struct FBonesTransforms UpdateModularRig(class USkeletalMeshComponent* SkelMeshComp, const struct FModularRigData& ModularRigData, const struct FFaceSettings& FaceSettings, class AActor* Rig);
	void UpdateCurvesFromSource(class ASkeletalMeshActor* SourceActor, class USkeletalMeshComponent* SkelMeshComp, const struct FModularRigData& ModularRigData);
	void PoseRig(class ASkeletalMeshActor* SourceActor, const struct FModularRigData& ModularRigData, const struct FFaceSettings& FaceSettings);
	void KeyRig(const struct FModularRigData& ModularRigData, const struct FFaceSettings& FaceSettings, class ULevelSequence* LevelSequence, float Time);
	struct FModularRigData InitModularRigData(const struct FModularRigData& ModularRigData);
	void CreateModularRig(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, struct FModularRigData* ModularRigData, struct FFaceSettings* FaceSettings);
	bool CheckSequencers(const TArray<class AActor*>& Controllers);
	void BakeToAnimAssetInternal(float Time, float TimeZero, float FPS, class UAnimSequence* NewAnimSequence, class ULevelSequence* LevelSequence, class ASkeletalMeshActor* SourceActor, class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, bool bUpdateSource, const struct FModularRigData& ModularRigData, const struct FFaceSettings& FaceSettings, struct FBonesTransforms* BonesTransforms, struct FBonesTransforms* SourceBT);
	class UAnimSequence* BakeToAnimAsset(class ULevelSequence* LevelSequence, int32 StartFrame, int32 EndFrame, class ASkeletalMeshActor* SourceActor, class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, bool bUpdateSource, const struct FModularRigData& ModularRigData, const struct FFaceSettings& FaceSettings, struct FBonesTransforms* BonesTransforms, struct FBonesTransforms* SourceBT);
	void BakeFromSequencer(class ULevelSequence* LevelSequence, int32 StartFrame, int32 EndFrame, class ASkeletalMeshActor* SourceActor, class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, const struct FModularRigData& ModularRigData, const struct FFaceSettings& FaceSettings, struct FBonesTransforms* BonesTransforms, struct FBonesTransforms* SourceBT);
};

// 0x4E8 (0x790 - 0x2A8)
// Class ARigRuntime.RigModular
class ARigModular : public ASkeletalMeshActor
{
public:
	bool                                         bTickInEditor;                                     // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateIfInFrustumOnly;                            // 0x2A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInFrustum;                                        // 0x2AA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceUpdate;                                      // 0x2AB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastRenderTime;                                    // 0x2AC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Prefix;                                            // 0x2B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      BonesTransforms;                                   // 0x2B8(0x20)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      SourceBT;                                          // 0x2D8(0x20)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB3[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModularRigData                       ModularRigData;                                    // 0x300(0x130)(Edit, BlueprintVisible, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FFaceSettings                         FaceRigData;                                       // 0x430(0x300)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FParentControllers>            PostParentControllersData;                         // 0x730(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FCreateConstraint>             PostCreateConstraintsData;                         // 0x740(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	class ASkeletalMeshActor*                    SourceActor;                                       // 0x750(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsolateSelected;                                  // 0x758(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicsAsset*                         MeshPhysicsAsset;                                  // 0x760(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AAnimOffset*>                   AnimOffsets;                                       // 0x768(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        Controllers;                                       // 0x778(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_CBB[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ARigModular* GetDefaultObj();

	void PostUpdateRig();
	void PostCreateRig();
	void PostBakeToAnim(class ULevelSequence* LevelSequence, int32 StartFrame, int32 EndFrame, class UAnimSequence* NewAnimSequence);
	void PostBakeFromSequencer(class ULevelSequence* LevelSequence, int32 StartFrame, int32 EndFrame);
	void OnUpdateRig();
	void EditorTick();
};

// 0x18 (0x270 - 0x258)
// Class ARigRuntime.OrientConstraint
class AOrientConstraint : public ARigConstraint
{
public:
	struct FVector                               Offset;                                            // 0x258(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RestPosition;                                      // 0x264(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AOrientConstraint* GetDefaultObj();

};

// 0x48 (0x2A0 - 0x258)
// Class ARigRuntime.ParentConstraint
class AParentConstraint : public ARigConstraint
{
public:
	TArray<struct FTransform>                    Offsets;                                           // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, Interp, NativeAccessSpecifierPublic)
	uint8                                        Pad_CC8[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RestPosition;                                      // 0x270(0x30)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AParentConstraint* GetDefaultObj();

};

// 0x18 (0x270 - 0x258)
// Class ARigRuntime.PointConstraint
class APointConstraint : public ARigConstraint
{
public:
	struct FVector                               Offset;                                            // 0x258(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RestPosition;                                      // 0x264(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class APointConstraint* GetDefaultObj();

};

// 0x18 (0x270 - 0x258)
// Class ARigRuntime.ScaleConstraint
class AScaleConstraint : public ARigConstraint
{
public:
	struct FVector                               Offset;                                            // 0x258(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RestPosition;                                      // 0x264(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AScaleConstraint* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ARigRuntime.ARSplineIk
class UARSplineIk : public UARigFunctions
{
public:

	static class UClass* StaticClass();
	static class UARSplineIk* GetDefaultObj();

	struct FBonesTransforms UpdateSplineIkRigs(const TArray<struct FSplineIkData>& SplineIkRigs, const struct FVector& CharScale, const struct FBonesTransforms& BonesTransforms);
	void SolveSplinePoints(class USplineComponent* SplineComponent, const struct FTransform& Root, const struct FTransform& Mid, const struct FTransform& Tip, float Curvature, bool bSolveEnds, const struct FAimSettings& AimSettings, const struct FVector& CharScale);
	void SolveSplineIkComponent(const struct FSplineIkData& SplineIkData, const struct FVector& CharScale);
	struct FBonesTransforms SolveSplineIkBones(const struct FSplineIkData& SplineIkData, const struct FBonesTransforms& BonesTransforms);
	void SolveMidSplineIkCtrl(class AActor* Start, class AActor* Mid, class AActor* End, class AActor* MidGrp, class AActor* EndGrp, const struct FTransform& OffsetA, const struct FTransform& OffsetB, const struct FTransform& OffsetUp, const struct FAimSettings& AimSettings, float MidParent, float MidLerp, bool FkIk);
	void PoseSplineIkRigs(class USkeletalMeshComponent* SkelMeshComp, const TArray<struct FSplineIkData>& SplineIkRigs);
	void ParentSplineIkRigs(TArray<struct FSplineIkData>* SpIkRigs, class AActor* Rig);
	void KeySplineIkRigs(const TArray<struct FSplineIkData>& SplineIkRigs, class ULevelSequence* LevelSequence, float Time);
	TArray<struct FTransform> GetSplineIkBoneOffsets(class USkeletalMeshComponent* SkelMeshComp, const struct FSplineIkData& SpIk);
	struct FTransform GetPosOnSpline(class USplineComponent* SplineComponent, int32 Index, int32 PosCount, const struct FAimSettings& AimSettings);
	TArray<struct FSplineIkData> CreateSplineIkRigs(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, const TArray<struct FSplineIkData>& SpIkRigs);
	void CreateSplineIkControllers(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, struct FSplineIkData* SpIk);
};

// 0x10 (0x230 - 0x220)
// Class ARigRuntime.ARTickableActor
class AARTickableActor : public AActor
{
public:
	class USceneComponent*                       Scene;                                             // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTickInEditor;                                     // 0x228(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D43[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AARTickableActor* GetDefaultObj();

	void OnPostEditMove();
	void EditorTick();
};

}


