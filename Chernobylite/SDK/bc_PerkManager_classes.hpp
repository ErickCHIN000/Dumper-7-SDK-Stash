#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xB0 - 0xB0)
// BlueprintGeneratedClass bc_PerkManager.bc_PerkManager_C
class Ubc_PerkManager_C : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class Ubc_PerkManager_C* GetDefaultObj();

	void CheckPerk(class FName PerkName, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, float CallFunc_CheckPerk_ValueA, float CallFunc_CheckPerk_ValueB, bool CallFunc_CheckPerk_ReturnValue);
	void RemovePerk(class FName PerkName, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter);
	void AddPerk(class FName PerkName, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_AddPerk_ReturnValue);
};

}


