#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0xA71 - 0xA70)
// BlueprintGeneratedClass Stick.Stick_C
class AStick_C : public AGenericMeleeWeaponLight_C
{
public:
	bool                                         IsStartedWeapon;                                   // 0xA70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AStick_C* GetDefaultObj();

	void UserConstructionScript();
};

}


