#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// BlueprintGeneratedClass bc_Base_UseAction.bc_Base_UseAction_C
class Ubc_Base_UseAction_C : public UObject
{
public:
	class ACh_Hero_00_C*                         HeroPawn;                                          // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SelfItemID;                                        // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ItemIndex;                                         // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Ubc_Base_UseAction_C* GetDefaultObj();

	void TryUse(class FName ItemId, class ACh_Hero_00_C* Pawn, const struct FVector2D& Index, bool* Success, class USoundBase** SoundToPlay, bool CallFunc_ActionBody_Success, class USoundBase* CallFunc_ActionBody_SoundToPlay);
	void ActionBody(bool* Success, class USoundBase** SoundToPlay);
};

}


