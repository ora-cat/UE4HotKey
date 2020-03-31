#include "HKInputProcessor.h"
#include "Kismet/KismetInternationalizationLibrary.h"

void FHKInputProcessor::Tick(const float DeltaTime, FSlateApplication& SlateApp, TSharedRef<ICursor> Cursor)
{
}

bool FHKInputProcessor::HandleKeyDownEvent(FSlateApplication& SlateApp, const FKeyEvent& InKeyEvent)
{
	//UE_LOG(LogTemp, Log, TEXT("HandleKeyDownEvent"));

	FKey Key = InKeyEvent.GetKey();
	if (Key == EKeys::F12) {
		KeyHandle_F12();
	}
	return false;
}

bool FHKInputProcessor::HandleKeyUpEvent(FSlateApplication& SlateApp, const FKeyEvent& InKeyEvent)
{
	return false;
}


void FHKInputProcessor::KeyHandle_F12()
{
	if (UKismetInternationalizationLibrary::GetCurrentLanguage() == "en")
	{
		UKismetInternationalizationLibrary::SetCurrentLanguage("zh-Hans");
	}
	else
	{
		UKismetInternationalizationLibrary::SetCurrentLanguage("en");
	}
}