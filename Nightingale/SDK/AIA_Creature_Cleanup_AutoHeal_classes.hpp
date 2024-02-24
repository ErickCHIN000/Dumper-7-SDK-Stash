#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xB8 - 0xB8)
// BlueprintGeneratedClass AIA_Creature_Cleanup_AutoHeal.AIA_Creature_Cleanup_AutoHeal_C
class UAIA_Creature_Cleanup_AutoHeal_C : public UAIA_CreatureBase_C
{
public:

	static class UClass* StaticClass();
	static class UAIA_Creature_Cleanup_AutoHeal_C* GetDefaultObj();

	bool CheckOwnerRequirements(bool CallFunc_AreAutomatedTestsRunning_ReturnValue, bool CallFunc_IsMaxHealth_bIsMinHealth, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	bool CheckStaticTargetRequirements(class AActor* Target, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

}


