#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xD50 - 0xD30)
// BlueprintGeneratedClass CatchableCloseRangeWeaponBase.CatchableCloseRangeWeaponBase_C
class ACatchableCloseRangeWeaponBase_C : public ACloseRangeWeaponCommon_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD30(0x8)(Transient, DuplicateTransient)
	class UHUDPopUpTrigger_C*                    HUDPopUpTrigger;                                   // 0xD38(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      HUDSphere;                                         // 0xD40(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                BreakableActor;                                    // 0xD48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACatchableCloseRangeWeaponBase_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Equipment_Set(bool Attached, bool Temp);
	void ExecuteUbergraph_CatchableCloseRangeWeaponBase(int32 EntryPoint, bool K2Node_Event_attached, bool K2Node_Event_temp);
};

}


