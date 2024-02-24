#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0xA38 - 0xA24)
// BlueprintGeneratedClass RadiateDamageActor_Fissure_Mod_03_Fracture.RadiateDamageActor_Fissure_Mod_03_Fracture_C
class ARadiateDamageActor_Fissure_Mod_03_Fracture_C : public ARadiateDamageActor_Fissure_C
{
public:
	uint8                                        Pad_178F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA28(0x8)(Transient, DuplicateTransient)
	class AGrenadeMod*                           ParentOwningSpell;                                 // 0xA30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ARadiateDamageActor_Fissure_Mod_03_Fracture_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_RadiateDamageActor_Fissure_Mod_03_Fracture(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue);
};

}


