#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x230 - 0x220)
// BlueprintGeneratedClass ba_ch_attachment_magazin_ak47_double.ba_ch_attachment_magazin_ak47_double_C
class Aba_ch_attachment_magazin_ak47_double_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                  DoubleMag;                                         // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Aba_ch_attachment_magazin_ak47_double_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_ba_ch_attachment_magazin_ak47_double(int32 EntryPoint);
};

}


