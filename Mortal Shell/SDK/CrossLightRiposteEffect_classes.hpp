#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2408 - 0x23E8)
// BlueprintGeneratedClass CrossLightRiposteEffect.CrossLightRiposteEffect_C
class ACrossLightRiposteEffect_C : public AChameleon_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x23E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Animate_EffectFadeLerp_0236D33A4E633642AFEF1CAA87619A4B; // 0x23F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Animate_SonarDistance_0236D33A4E633642AFEF1CAA87619A4B; // 0x23F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Animate_BlendWeight_0236D33A4E633642AFEF1CAA87619A4B; // 0x23F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Animate__Direction_0236D33A4E633642AFEF1CAA87619A4B; // 0x23FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E14[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Animate;                                           // 0x2400(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACrossLightRiposteEffect_C* GetDefaultObj();

	void Animate__FinishedFunc();
	void Animate__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_CrossLightRiposteEffect(int32 EntryPoint, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2);
};

}


