#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x75 (0x75 - 0x0)
// UserDefinedStruct S_SaveInteractables.S_SaveInteractables
struct FS_SaveInteractables
{
public:
	class AActor*                                InteractableActor_80_A54CDEE64DCAA995596C58BA398BF419; // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                SpawnActorClass_78_0B38D7FB4473DC8884E01DB0EECE75F6; // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            Transform_5_7A9D3E24430220BE6A9DA2A029A38755;      // 0x10(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	TArray<struct FS_ItemData>                   ItemData_44_7DBEB799478367279FBBBC8D7111022B;      // 0x40(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                         DestroyAfterPickup_22_37E57C094BED8364A3458098E537BFD5; // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2736[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InventorySize_25_31F269414310F2B580A0F58BCB6740E0; // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VendorGold_19_3969B1274C140EB9A3E3B4BBB6551BC3;    // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInteractable_86_0E720E104B28C8A67EDA05B091E618E0; // 0x5C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_273C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                AttachedParentActor_43_B9A75CB647A157EBF75A53A0C49B9B05; // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimelinePostion_83_CB5DC09B4E2FE9C85930EC87241111C3; // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TimelineDirection_89_C6A0ABA8483FB5591845AA93CD5636DC; // 0x6C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AlreadyInteracted_85_5EFE7ABA4399B49347680886DE22E03D; // 0x6D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2746[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InteractionValue_96_E78CE6FC42BFFB7ABF4D61B7B5F59AD6; // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_InteractionResponse             InteractionResponse_101_C364D6FE4834E1C6DAAEA790AAFDB4DC; // 0x74(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


