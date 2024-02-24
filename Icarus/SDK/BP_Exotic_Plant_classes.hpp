#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x3D8 - 0x3CC)
// BlueprintGeneratedClass BP_Exotic_Plant.BP_Exotic_Plant_C
class ABP_Exotic_Plant_C : public ABP_ResourceNodeBase_C
{
public:
	uint8                                        Pad_47A4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Exotic_Plant_C* GetDefaultObj();

	void PlayHarvestFX(const struct FVector& Location, class AIcarusPlayerCharacter* Instigator, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Exotic_Plant(int32 EntryPoint);
};

}


