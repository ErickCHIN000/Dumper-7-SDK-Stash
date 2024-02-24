#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2D8 - 0x2C0)
// Class TechTree.TechNodeArrowWidget
class UTechNodeArrowWidget : public UUserWidget
{
public:
	enum class ETechNodePinType                  PinType;                                           // 0x2C0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BCA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ConnectionAngle;                                   // 0x2C4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTechnologyAsset*                      ParentTechnology;                                  // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTechnologyAsset*                      ChildTechnology;                                   // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTechNodeArrowWidget* GetDefaultObj();

	void OnNodeArrowInitialized();
};

// 0x8 (0x2C8 - 0x2C0)
// Class TechTree.TechNodeWidget
class UTechNodeWidget : public UUserWidget
{
public:
	class UTechnologyAsset*                      TechnologyAsset;                                   // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTechNodeWidget* GetDefaultObj();

	void OnTechNodeInitialized();
};

// 0xD0 (0x100 - 0x30)
// Class TechTree.TechnologyAsset
class UTechnologyAsset : public UPrimaryDataAsset
{
public:
	struct FSlateBrush                           TechIcon;                                          // 0x30(0xD0)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTechnologyAsset* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class TechTree.TechnologySaveGame
class UTechnologySaveGame : public USaveGame
{
public:
	TArray<class UTechnologyAsset*>              UnlockedTechnologies;                              // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class UTechnologyTree*, struct FUnlockedTechnologiesData> MultipleTreesUnlockedTechnologies;                 // 0x38(0x50)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTechnologySaveGame* GetDefaultObj();

};

// 0x278 (0x2A0 - 0x28)
// Class TechTree.TechnologyTree
class UTechnologyTree : public UObject
{
public:
	struct FVector2D                             TreeSize;                                          // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETechTreeOrientation              Orientation;                                       // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           BackgroundImage;                                   // 0x40(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        ConnectionLineThickness;                           // 0x110(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ConnectionLineColor;                               // 0x114(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CAD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UTechNodeWidget>           SlotTemplate;                                      // 0x128(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             SlotSize;                                          // 0x130(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UTechNodeArrowWidget>      ArrowTemplate;                                     // 0x140(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ArrowSize;                                         // 0x148(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GridSnapSize;                                      // 0x158(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowBoundaries;                                    // 0x15C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          BoundariesColor;                                   // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoundariesThickness;                               // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowPinArrows;                                     // 0x174(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowAlignmentGrid;                                 // 0x175(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CBE[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             AlignmentGridSize;                                 // 0x178(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             AlignmentGridOffset;                               // 0x188(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          AlignmentGridColor;                                // 0x198(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AlignmentGridThickness;                            // 0x1A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CC7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTTTechNode*>                   TechNodes;                                         // 0x1B0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class UTechnologyAsset*, class UTTTechNode*> TechnologiesMap;                                   // 0x1C0(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
	class UEdGraph*                              UpdateGraph;                                       // 0x210(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UniqueID;                                          // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnTechnologyUnlockStateChanged;                    // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<class UTechnologyAsset*, class UTTTechNode*> UnlockedTechnologies;                              // 0x230(0x50)(Transient, NativeAccessSpecifierPublic)
	TArray<class UTTTechNode*>                   CurrentlyActiveNodes;                              // 0x280(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	class UTechnologyTree*                       TechTreeTemplate;                                  // 0x290(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CDA[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTechnologyTree* GetDefaultObj();

	void OnTechnologyUnlockStateChanged__DelegateSignature(class UTTTechNode* TechNode, bool IsUnlocked);
	bool IsTechnologyUnlocked(class UTechnologyAsset* Technology);
	bool HasUnlockedParents(class UTechnologyAsset* Technology);
	class FString GetTechAssetName();
	TArray<struct FTechNodeLink> GetConnections();
	TArray<struct FTechNodeLink> FilterConnections(TArray<struct FTechNodeLink>& ConnectionsIn, TArray<class UTechnologyAsset*>& IgnoredParentTechnologies, TArray<class UTechnologyAsset*>& IgnoredChildTechnologies);
};

// 0xA0 (0x140 - 0xA0)
// Class TechTree.TechTreeManager
class UTechTreeManager : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnTechnologyUnlockStateChanged;                    // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnTechTreeAssigned;                                // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UTechnologySaveGame>       SaveGameTemplate;                                  // 0xC0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnTechTreeRecovered;                               // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class UTechnologyTree*                       TechnologyTree;                                    // 0xD8(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTechTreeWidget*                       TechTreeWidget;                                    // 0xE0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class UTechnologyTree*, class UTechnologyTree*> AssignedTechTrees;                                 // 0xE8(0x50)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DED[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTechTreeManager* GetDefaultObj();

	void UnlockTechnology(class UTechnologyAsset* Technology);
	void SelectTechTree(class UTechnologyTree* TechTree);
	void SaveTechToObject(class USaveGame* SaveGameObject);
	void SaveTechStateFromSlot(const class FString& SlotName, int32 UserIndex);
	void Reset();
	void OnTechTreeRecovered__DelegateSignature(class UTechnologyTree* TechTree);
	void OnTechTreeAssigned__DelegateSignature(class UTechnologyTree* TechTree);
	void OnTechnologyUnlockStateChanged__DelegateSignature(class UTechnologyTree* TechTree, class UTTTechNode* TechNode, bool IsUnlocked);
	void LockTechnology(class UTechnologyAsset* Technology);
	void LoadTechStateFromSlot(const class FString& SlotName, int32 UserIndex);
	void LoadTechFromObject(class USaveGame* SaveGameObject);
	bool IsTechnologyUnlocked(class UTechnologyAsset* Technology);
	bool IsChildTechnology(class UTTTechNode* ParentNode, class UTechnologyAsset* ChildNodeTechnology);
	bool HasUnlockedParents(class UTechnologyAsset* Technology);
	void HandleTechnologyStateChanged(class UTTTechNode* TechNode, bool IsUnlocked);
	class UTechTreeWidget* GetTechTreeWidget();
	class USaveGame* GetSavegameTechObject();
	int32 GetNumberTreesAssigned();
	class UTTTechNode* GetNodeFromTechAsset(class UTechnologyAsset* Technology);
	class UTechnologyTree* GetAssignedTechTree();
	void AssignTechTree(class UTechnologyTree* TechTree, class UTechTreeWidget* TechTreeWidget);
};

// 0x78 (0x1F8 - 0x180)
// Class TechTree.TechTreeWidget
class UTechTreeWidget : public UWidget
{
public:
	class UTechnologyTree*                       TechTree;                                          // 0x180(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E4A[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TWeakObjectPtr<class UTechNodeWidget>> SlotWidgetsCached;                                 // 0x1C8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class UTechNodeArrowWidget>> ArrowWidgetsCached;                                // 0x1D8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FTechNodeLink>                 ConnectionsCached;                                 // 0x1E8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UTechTreeWidget* GetDefaultObj();

	void UpdateConnections(TArray<struct FTechNodeLink>& Connections);
	void UpdateArrowPinWidgets();
	TArray<class UTechNodeWidget*> GetTechNodeWidgets();
	class UTechNodeWidget* GetTechNode(class UTechnologyAsset* TechnologyAsset);
	TArray<class UTechNodeArrowWidget*> GetArrowWidgets();
};

// 0x30 (0x58 - 0x28)
// Class TechTree.TTBaseNode
class UTTBaseNode : public UObject
{
public:
	int32                                        NodePosX;                                          // 0x28(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NodePosY;                                          // 0x2C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UTTBaseNode*>                   ParentNodes;                                       // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UTTBaseNode*>                   ChildNodes;                                        // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint32                                       UniqueID;                                          // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E5F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTTBaseNode* GetDefaultObj();

};

// 0x18 (0x70 - 0x58)
// Class TechTree.TTTechNode
class UTTTechNode : public UTTBaseNode
{
public:
	class UTechnologyAsset*                      TechnologyAsset;                                   // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsUnlockedByDefault;                               // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E68[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTTTechNode* GetDefaultObj();

};

}


