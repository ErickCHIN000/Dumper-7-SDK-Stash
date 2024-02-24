#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x3F8 - 0x3D8)
// BlueprintGeneratedClass EM_DialogueTrigger.EM_DialogueTrigger_C
class AEM_DialogueTrigger_C : public ASexyEventMarker
{
public:
	class UBoxComponent*                         Box;                                               // 0x3D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Activated;                                         // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        BlockActors;                                       // 0x3E8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)

	static class UClass* StaticClass();
	static class AEM_DialogueTrigger_C* GetDefaultObj();

};

}


