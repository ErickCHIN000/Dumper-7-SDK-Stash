#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3B (0x6B - 0x30)
// BlueprintGeneratedClass UDS_Cloud_Paint_Cell.UDS_Cloud_Paint_Cell_C
class UUDS_Cloud_Paint_Cell_C : public UPrimaryDataAsset
{
public:
	TArray<struct FLinearColor>                  Painting_Array;                                    // 0x30(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSoftObjectPtr<class UTexture2D>             Texture;                                           // 0x40(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         Zero_Coverage_Present;                             // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Mid_Coverage_Present;                              // 0x69(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Full_Coverage_Present;                             // 0x6A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUDS_Cloud_Paint_Cell_C* GetDefaultObj();

};

}


