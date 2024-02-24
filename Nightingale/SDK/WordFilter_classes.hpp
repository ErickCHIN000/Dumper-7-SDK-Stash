#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x98 - 0x28)
// Class WordFilter.ProfanityFilter
class UProfanityFilter : public UObject
{
public:
	uint8                                        Pad_11FF[0x70];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProfanityFilter* GetDefaultObj();

	void InitializeFromOnlineList(const class FString& Environment);
	void Initialize(TArray<class FString>& BadWords);
	class FString Censor(const class FString& InputString);
};

}


