#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0xA80 - 0xA6C)
// BlueprintGeneratedClass BPWeap_SM_TED.BPWeap_SM_TED_C
class ABPWeap_SM_TED_C : public ABPWeap_Tediore_BaseWeapon_C
{
public:
	uint8                                        Pad_401B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA70(0x8)(Transient, DuplicateTransient)
	class AActor*                                TenGallon;                                         // 0xA78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPWeap_SM_TED_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPWeap_SM_TED(int32 EntryPoint);
};

}


