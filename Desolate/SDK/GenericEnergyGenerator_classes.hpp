#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x248 - 0x238)
// BlueprintGeneratedClass GenericEnergyGenerator.GenericEnergyGenerator_C
class AGenericEnergyGenerator_C : public AGenericInteractiveActor_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGenericEnergyGenerator_C* GetDefaultObj();

	void GetPower(float* Power);
	void GetEnergyLevel(float* Level);
	void GetIsWorking(bool* IsWorking);
	void Discharge(float Amount);
	void ExecuteUbergraph_GenericEnergyGenerator(int32 EntryPoint, float K2Node_Event_Amount);
};

}


