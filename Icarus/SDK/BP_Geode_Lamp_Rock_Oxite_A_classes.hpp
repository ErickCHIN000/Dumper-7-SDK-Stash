#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13 (0x7D8 - 0x7C5)
// BlueprintGeneratedClass BP_Geode_Lamp_Rock_Oxite_A.BP_Geode_Lamp_Rock_Oxite_A_C
class ABP_Geode_Lamp_Rock_Oxite_A_C : public ABP_Light_Free_Base_C
{
public:
	uint8                                        Pad_2971[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                  PointLight;                                        // 0x7D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Geode_Lamp_Rock_Oxite_A_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Geode_Lamp_Rock_Oxite_A(int32 EntryPoint);
};

}


