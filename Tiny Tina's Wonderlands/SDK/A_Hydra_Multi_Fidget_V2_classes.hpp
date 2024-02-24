#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x230 - 0x228)
// BlueprintGeneratedClass A_Hydra_Multi_Fidget_V2.A_Hydra_Multi_Fidget_V2_C
class UA_Hydra_Multi_Fidget_V2_C : public UA_Hydra_Fidget_v1_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UA_Hydra_Multi_Fidget_V2_C* GetDefaultObj();

	void AN_SpawnAmmo_A();
	void AN_SpawnAmmo_B();
	void AN_SpawnAmmo_C();
	void ExecuteUbergraph_A_Hydra_Multi_Fidget_V2(int32 EntryPoint);
};

}


