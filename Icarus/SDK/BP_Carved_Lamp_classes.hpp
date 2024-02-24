#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x7D0 - 0x7BC)
// BlueprintGeneratedClass BP_Carved_Lamp.BP_Carved_Lamp_C
class ABP_Carved_Lamp_C : public ABP_Light_Electric_Base_C
{
public:
	uint8                                        Pad_5266[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_IcarusPointLight_C*                BP_IcarusPointLight;                               // 0x7C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Carved_Lamp_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Carved_Lamp(int32 EntryPoint);
};

}


