#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x9F8 - 0x9F0)
// BlueprintGeneratedClass BPWeap_SR_VLA.BPWeap_SR_VLA_C
class ABPWeap_SR_VLA_C : public ABPWeap_VLA_BaseWeapon_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABPWeap_SR_VLA_C* GetDefaultObj();

	void OnPutDown();
	void OnSwitchedMode(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue);
	void OnEquipped(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue);
	void UpdateResourceLocks(bool Enable, class FName ResourceLockReason, class APawn* CallFunc_GetInstigator_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue1, class APawn* CallFunc_GetInstigator_ReturnValue2, bool CallFunc_IsValid_ReturnValue);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void Weapon_NotifyPutDown(class AWeapon* EventWeapon);
	void ExecuteUbergraph_BPWeap_SR_VLA(int32 EntryPoint, class AWeapon* K2Node_CustomEvent_EventWeapon, enum class EEndPlayReason K2Node_Event_EndPlayReason, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2);
};

}


