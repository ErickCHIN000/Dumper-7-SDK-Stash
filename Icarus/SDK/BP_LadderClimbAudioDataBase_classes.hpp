#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x40 - 0x30)
// BlueprintGeneratedClass BP_LadderClimbAudioDataBase.BP_LadderClimbAudioDataBase_C
class UBP_LadderClimbAudioDataBase_C : public UPrimaryDataAsset
{
public:
	TArray<struct FFLadderClimbAnimNotifyData>   LadderNotifies;                                    // 0x30(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBP_LadderClimbAudioDataBase_C* GetDefaultObj();

};

}


