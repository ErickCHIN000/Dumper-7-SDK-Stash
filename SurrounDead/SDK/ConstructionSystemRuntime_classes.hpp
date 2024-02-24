#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class ConstructionSystemRuntime.ConstructionSystemTool
class UConstructionSystemTool : public UObject
{
public:
	uint8                                        Pad_B9F[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConstructionSystemTool* GetDefaultObj();

};

// 0x138 (0x168 - 0x30)
// Class ConstructionSystemRuntime.ConstructionSystemBuildTool
class UConstructionSystemBuildTool : public UConstructionSystemTool
{
public:
	float                                        TraceDistance;                                     // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CursorRotationStepAngle;                           // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UConstructionSystemCursor*             Cursor;                                            // 0x38(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPrefabricatorAssetInterface*          ActivePrefabAsset;                                 // 0x40(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_BE4[0x120];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConstructionSystemBuildTool* GetDefaultObj();

	void SetActivePrefab(class UPrefabricatorAssetInterface* InActivePrefabAsset);
	void HandleInput_RotateCursorStep(float NumSteps);
	void HandleInput_CursorMovePrev();
	void HandleInput_CursorMoveNext();
	void HandleInput_ConstructAtCursor();
};

// 0xA0 (0x140 - 0xA0)
// Class ConstructionSystemRuntime.ConstructionSystemComponent
class UConstructionSystemComponent : public UActorComponent
{
public:
	class UMaterialInterface*                    CursorMaterial;                                    // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    CursorInvalidMaterial;                             // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TraceStartDistance;                                // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TraceSweepRadius;                                  // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ConstructionCameraActor;                           // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConstructionCameraTransitionTime;                  // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConstructionCameraTransitionExp;                   // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>               BuildMenuUI;                                       // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UConstructionSystemUIAsset*            BuildMenuData;                                     // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                           BuildMenuUIInstance;                               // 0xD8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConstructionSystemToolType       ActiveToolType;                                    // 0xE0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C7E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EConstructionSystemToolType, class UConstructionSystemTool*> Tools;                                             // 0xE8(0x50)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_C80[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConstructionSystemComponent* GetDefaultObj();

	void ToggleConstructionSystem();
	void ShowBuildMenu();
	void SetActiveTool(enum class EConstructionSystemToolType InToolType);
	void HideBuildMenu();
	class UConstructionSystemTool* GetTool(enum class EConstructionSystemToolType InToolType);
	enum class EConstructionSystemToolType GetActiveToolType();
	class UConstructionSystemTool* GetActiveTool();
	void EnableConstructionSystem(enum class EConstructionSystemToolType InToolType);
	void DisableConstructionSystem();
};

// 0x8 (0x30 - 0x28)
// Class ConstructionSystemRuntime.ConstructionSystemItemUserData
class UConstructionSystemItemUserData : public UAssetUserData
{
public:
	int32                                        Seed;                                              // 0x28(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C9B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConstructionSystemItemUserData* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class ConstructionSystemRuntime.ConstructionSystemCursor
class UConstructionSystemCursor : public UObject
{
public:
	class APrefabActor*                          CursorGhostActor;                                  // 0x28(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        CursorSeed;                                        // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_CA2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    CursorMaterial;                                    // 0x38(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                    CursorInvalidMaterial;                             // 0x40(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UPrefabricatorConstructionSnapComponent*> SnapComponents;                                    // 0x48(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	int32                                        ActiveSnapComponentIndex;                          // 0x58(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_CA4[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConstructionSystemCursor* GetDefaultObj();

};

// 0x60 (0x90 - 0x30)
// Class ConstructionSystemRuntime.ConstructionSystemRemoveTool
class UConstructionSystemRemoveTool : public UConstructionSystemTool
{
public:
	float                                        TraceDistance;                                     // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class APrefabActor>           FocusedActor;                                      // 0x34(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_CB6[0x54];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConstructionSystemRemoveTool* GetDefaultObj();

	void HandleInput_RemoveAtCursor();
};

// 0xB8 (0xE0 - 0x28)
// Class ConstructionSystemRuntime.ConstructionSystemSaveGame
class UConstructionSystemSaveGame : public USaveGame
{
public:
	class FString                                SaveSlotName;                                      // 0x28(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       UserIndex;                                         // 0x38(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConstructionSystemSavePlayerInfo     PlayerInfo;                                        // 0x40(0x90)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FConstructionSystemSaveConstructedItem> ConstructedItems;                                  // 0xD0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UConstructionSystemSaveGame* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ConstructionSystemRuntime.ConstructionSystemSaveSystem
class UConstructionSystemSaveSystem : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UConstructionSystemSaveSystem* GetDefaultObj();

	void SaveConstructionSystemLevel(class UObject* WorldContextObject, const class FString& SaveSlotName, int32 UserIndex, bool bSavePlayerState);
	void LoadConstructionSystemLevel(class UObject* WorldContextObject, class FName& LevelName, bool bAbsolute, const class FString& SaveSlotName, int32 UserIndex);
	void HandleConstructionSystemLevelLoad(class UObject* WorldContextObject);
};

// 0x20 (0x5D0 - 0x5B0)
// Class ConstructionSystemRuntime.PrefabricatorConstructionSnapComponent
class UPrefabricatorConstructionSnapComponent : public UBoxComponent
{
public:
	enum class EPrefabricatorConstructionSnapType SnapType;                                          // 0x5B0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPCSnapConstraintFloor                FloorConstraint;                                   // 0x5B1(0x6)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPCSnapConstraintWall                 WallConstraint;                                    // 0x5B7(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bAlignToGroundSlope;                               // 0x5BB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseMaxGroundSlopeConstraint;                      // 0x5BC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D46[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxGroundPlacementSlope;                           // 0x5C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D48[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPrefabricatorConstructionSnapComponent* GetDefaultObj();

};

// 0x8 (0x2A0 - 0x298)
// Class ConstructionSystemRuntime.PrefabricatorConstructionSnap
class APrefabricatorConstructionSnap : public AActor
{
public:
	class UPrefabricatorConstructionSnapComponent* ConstructionSnapComponent;                         // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class APrefabricatorConstructionSnap* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ConstructionSystemRuntime.ConstructionSystemBuildUI
class IConstructionSystemBuildUI : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IConstructionSystemBuildUI* GetDefaultObj();

	void SetUIAsset(class UConstructionSystemUIAsset* UIAsset);
	void SetConstructionSystem(class UConstructionSystemComponent* ConstructionSystem);
};

// 0x28 (0x58 - 0x30)
// Class ConstructionSystemRuntime.ConstructionSystemUIAsset
class UConstructionSystemUIAsset : public UDataAsset
{
public:
	class FText                                  MenuTitle;                                         // 0x30(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FConstructionSystemUICategory> Categories;                                        // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UConstructionSystemUIAsset* GetDefaultObj();

};

}


