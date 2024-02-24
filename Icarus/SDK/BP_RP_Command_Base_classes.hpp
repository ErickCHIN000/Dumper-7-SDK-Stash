#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x37 (0x619 - 0x5E2)
// BlueprintGeneratedClass BP_RP_Command_Base.BP_RP_Command_Base_C
class ABP_RP_Command_Base_C : public ABP_PartBase_C
{
public:
	uint8                                        Pad_50E[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                  Container;                                         // 0x5F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  Seat;                                              // 0x5F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  Bottom;                                            // 0x600(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  Top;                                               // 0x608(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x610(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Open;                                              // 0x618(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_RP_Command_Base_C* GetDefaultObj();

	void ReadyCheck(bool* Success, class ABP_DropshipSeat_C* CallFunc_GetSeat_Dropship_Seat, bool CallFunc_IsValid_ReturnValue);
	void GetSeat(class ABP_DropshipSeat_C** Dropship_Seat, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_DropshipSeat_C* K2Node_DynamicCast_AsBP_Dropship_Seat, bool K2Node_DynamicCast_bSuccess);
	void TriggerEvent(const struct FDropShipActionsEnum& Actions, bool K2Node_SwitchRowEnum_CmpSuccess, class ABP_DropshipSeat_C* CallFunc_GetSeat_Dropship_Seat, class ABP_DropshipSeat_C* CallFunc_GetSeat_Dropship_Seat_1, bool CallFunc_ExitSeat_Success);
	void ExitSeat(bool* Success, class ABP_DropshipSeat_C* CallFunc_GetSeat_Dropship_Seat, bool CallFunc_LeaveSeat_ReturnValue);
	void EnterSeat(class AIcarusPlayerCharacterSurvival* Character, bool* Success, class ABP_DropshipSeat_C* CallFunc_GetSeat_Dropship_Seat, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EnterSeat_ReturnValue);
	void GetMesh(class UPrimitiveComponent** Mesh);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_RP_Command_Base(int32 EntryPoint);
};

}


