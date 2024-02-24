#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x608 - 0x5E8)
// BlueprintGeneratedClass BP_PlayerPOI.BP_PlayerPOI_C
class ABP_PlayerPOI_C : public AZoneMapPlayerIcon_POI
{
public:
	uint8                                        Pad_1898[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5F0(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  SM_PlayerIcon;                                     // 0x5F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere;                                            // 0x600(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PlayerPOI_C* GetDefaultObj();

	void UserConstructionScript(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1);
	void Activate_POI();
	void ReceiveBeginPlay();
	void Begin_Zone_Map_Cursor_Over();
	void End_Zone_Map_Cursor_Over();
	void ExecuteUbergraph_BP_PlayerPOI(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
};

}


