#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x140 (0x1F0 - 0xB0)
// Class WorldDirectorPRO.NpcDataProComponent
class UNpcDataProComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnPrepareForOptimization;                          // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRecoveryFromOptimization;                        // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            EventBehindCameraFOV;                              // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            EventInCameraFOV;                                  // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bIsActivate;                                       // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsOptimizeAllActorComponentsTickInterval;         // 0xF1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDisableTickIfBehindCameraFOV;                   // 0xF2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPopulationControlSupport;                         // 0xF3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNpcDataPro                           NpcData;                                           // 0xF4(0x38)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               NpcSpawnLocation;                                  // 0x12C(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_123[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AWorldDirectorNpcPRO*                  DirectorNPCRef;                                    // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_125[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPawnMovementComponent*                MovementComponent;                                 // 0x180(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                OwnerActor;                                        // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_127[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class USkeletalMeshComponent*, enum class EVisibilityBasedAnimTickOption> basedAnimTickOptionArr;                            // 0x1A0(0x50)(ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNpcDataProComponent* GetDefaultObj();

	void RecoveryFromOptimization__DelegateSignature();
	void RecoveryFromOptimization();
	void PrepareForOptimizationBP();
	void PrepareForOptimization__DelegateSignature();
	void OnInCameraFOV__DelegateSignature();
	void OnBehindCameraFOV__DelegateSignature();
};

// 0x88 (0x2A8 - 0x220)
// Class WorldDirectorPRO.WorldDirectorNpcPRO
class AWorldDirectorNpcPRO : public AActor
{
public:
	class UInstancedStaticMeshComponent*         StaticMeshInstanceComponent;                       // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFixUE4261EditorCrash;                           // 0x228(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsActivate;                                       // 0x229(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDebug;                                          // 0x22A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_148[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDirectorProStruct                    DirectorParameters;                                // 0x230(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FNpcStructPro>                 AllBackgroundNPCArr;                               // 0x250(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FNpcStructPro>                 AllThreadNPCArr_Debug;                             // 0x260(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FNpcStructPro>                 AllNPCArr_ForBP;                                   // 0x270(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class AActor*>                        AllRegisteredNpcArr;                               // 0x280(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_14E[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AWorldDirectorNpcPRO* GetDefaultObj();

	void RestoreNPC_BP(int32 IndexNpc, class AActor* ActorRef);
	void InsertNPCInBackground_BP(class AActor* ActorRef);
	int32 GetBackgroundNpcCount();
};

}


