#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xA30 - 0xA24)
// BlueprintGeneratedClass RadiateDamageActor_Fissure_Mod_04_Aftershock.RadiateDamageActor_Fissure_Mod_04_Aftershock_C
class ARadiateDamageActor_Fissure_Mod_04_Aftershock_C : public ARadiateDamageActor_Fissure_C
{
public:
	uint8                                        Pad_1786[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGrenadeMod*                           ParentOwningSpell;                                 // 0xA28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ARadiateDamageActor_Fissure_Mod_04_Aftershock_C* GetDefaultObj();

	void UserConstructionScript(bool CallFunc_IsValid_ReturnValue);
};

}


