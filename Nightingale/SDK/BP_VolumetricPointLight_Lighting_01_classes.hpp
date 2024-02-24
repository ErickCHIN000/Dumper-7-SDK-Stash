#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x310 - 0x2F8)
// BlueprintGeneratedClass BP_VolumetricPointLight_Lighting_01.BP_VolumetricPointLight_Lighting_01_C
class ABP_VolumetricPointLight_Lighting_01_C : public AVolumetricPointLight
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Timeline_0_NewTrack_0_3F2B928A47DDD51A572054A8341CCDF0; // 0x300(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_3F2B928A47DDD51A572054A8341CCDF0; // 0x304(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A0D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_VolumetricPointLight_Lighting_01_C* GetDefaultObj();

	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Volume_Light_Play_Timeline();
	void ExecuteUbergraph_BP_VolumetricPointLight_Lighting_01(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


