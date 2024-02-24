#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x5F0 - 0x5E0)
// BlueprintGeneratedClass BP_ZoneMap_FriendPOI.BP_ZoneMap_FriendPOI_C
class ABP_ZoneMap_FriendPOI_C : public AOakZoneMapFriendIcon_POI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5E0(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x5E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ZoneMap_FriendPOI_C* GetDefaultObj();

	void UserConstructionScript(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2);
	void Activate_POI();
	void ReceiveBeginPlay();
	void Begin_Zone_Map_Cursor_Over();
	void End_Zone_Map_Cursor_Over();
	void ExecuteUbergraph_BP_ZoneMap_FriendPOI(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
};

}


